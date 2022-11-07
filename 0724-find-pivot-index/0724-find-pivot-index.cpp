class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int siz = nums.size() ,sum1 = 0 ,sum2 = 0;
        vector<int>fwdSum(siz) , bkwdSum(siz) ;
        for( int i = 0 ; i < siz ; i++ ){
            sum1 += nums[i] ;
            sum2 += nums[siz-i-1] ;
            fwdSum[i] = sum1 ;
            bkwdSum[siz-i-1] = sum2 ;
        }
        if( siz == 1 or ( bkwdSum[1] == 0 ) ) return 0 ;    
        for( int i = 1 ; i < siz-1 ; i++ )
           if( fwdSum[i-1] == bkwdSum[i+1] )
               return i ;
         if( fwdSum[siz-2] == 0 ) return siz-1 ;
        return -1 ;     
}
};