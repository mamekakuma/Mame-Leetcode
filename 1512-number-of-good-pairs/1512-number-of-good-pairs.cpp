class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map< int,int >cntr ;
        int ans = 0 , temp ;
        for( auto itr : nums )
            cntr[itr]++ ;
        for( auto itr : cntr ){
            temp = itr.second  ;
            temp-- ;
            if( temp > 0 )
                ans += (temp*temp+temp)/2 ;         
        }
        return ans ;
    }
};