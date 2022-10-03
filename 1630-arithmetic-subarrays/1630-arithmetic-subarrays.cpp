class Solution {
public:
    bool isArt( vector<int>& nums , int Start , int End ){
        vector<int> sub ;
        for( int j = Start ; j <= End ; j++)
            sub.emplace_back(nums[j]) ;
        sort(sub.begin(),sub.end()) ;
        int diff = sub[1] - sub[0] ;
        for( int i= 1 ; i <= (End-Start) ; i++)
            if( diff != (sub[i]-sub[i-1]) )
                return false ;
        return true ;
    }
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector< bool > ans ;
        for( int i  = 0 ; i < l.size() ; i++ )
            ans.emplace_back( isArt(nums , l[i] , r[i]) ) ;
      return ans ;  
    }
};