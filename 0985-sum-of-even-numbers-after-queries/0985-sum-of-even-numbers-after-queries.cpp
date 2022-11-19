class Solution {
public:
    vector<int> sumEvenAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int evenSum = 0 , update ;
        vector< int > ans ;  
        for( auto x : nums ){
            if( x%2== 0 )
                evenSum += x ;
        }
        for( auto &x : queries ){
            if( nums[ x[1] ]%2 == 0 )
                evenSum -= nums[ x[1] ] ;
            update = nums[ x[1] ] + x[0] ;
            if( update%2 == 0  )
                evenSum += update ;
            ans.emplace_back( evenSum ) ; 
            nums[ x[1] ] = update ;
        }
        return ans ;
    }
};