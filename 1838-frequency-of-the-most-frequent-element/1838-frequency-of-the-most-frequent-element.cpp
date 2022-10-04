class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort( nums.rbegin(),nums.rend());
        int maxFreq = 1 , left = 0 , right = 1 , siz = nums.size() , opr = 0 , len ;
        while( right < siz ){
            if(opr > k ){
                opr -= ( (nums[left]-nums[left+1])*(right-left-1) )  ;
                len = right-left-1 ;
                maxFreq = max( maxFreq , len);
                left++ ;
            }
            else{
                opr += (nums[left]-nums[right]) ;
                right++ ;
            }
        }
        if(opr > k )
           {
            right-- ;
            opr -= (nums[left]-nums[right]) ;
           }
        
        if(opr <= k )
        {
            len = right-left ;
            maxFreq = max( maxFreq , len);
        }
        return maxFreq ;
    }
};