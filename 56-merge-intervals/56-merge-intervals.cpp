class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>>ans ;
   vector< int >Map(10001 , 0 ) ;
    vector< bool >checkMate(10001 , 0 ) ;
        int begins = -1 , consistency = 0 ;
       for( auto itr : intervals ){
           if( itr[0] == itr[1])
               checkMate[ itr[0] ] = true ;
           Map[itr[0]]++ ;
           Map[itr[1]]-- ; 
       }
        for(int i = 0 ; i < 10001 ; i++ ){
            consistency += Map[i] ;
            if( !consistency and checkMate[i] and begins == -1 )
                ans.push_back({i , i}) ;
            else if( consistency and begins == -1 )
                begins = i ;
            else if(!consistency and begins != -1 ){
                ans.push_back({begins , i}) ;
                begins = -1 ;
            }
        }
        return ans ;
        }
};