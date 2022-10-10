class Solution {
public:
    int nxtGreater( int val , int beg , int last , vector<int> &nums2 ){
        int res = -1 ;
        for(int i = beg ; i < last ; i++ )
            if( nums2[i] > val )
               return nums2[i] ;      
        return res ;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>ans ;
        int siz = nums2.size();
        unordered_map<int , int >idx ;
        for( int i  = 0 ; i < siz ; i++ )
            idx[ nums2[i] ] = i ;
        for( auto x : nums1 )
           ans.emplace_back( nxtGreater( x , idx[x]+1 , siz , nums2 ) )  ;      
    return ans ;
    }
};