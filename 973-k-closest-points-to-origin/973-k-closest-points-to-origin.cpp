class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        double dist ;
        multimap< double , vector<int> >closest ;
        for(auto x : points){
            dist = sqrt(x[0]*x[0] + x[1]*x[1]) ;
            closest.insert({dist , {x[0] , x[1]} });
        }
        vector<vector<int>>ans ;
        int itr = 0 ;
        for(auto x : closest ){
            itr++ ;
            if( itr > k )
                break;
            ans.push_back(x.second) ;
        }
        return ans ;
    }
};