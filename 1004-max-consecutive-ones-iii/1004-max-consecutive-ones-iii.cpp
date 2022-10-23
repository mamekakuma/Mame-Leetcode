class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int left = 0  ,right = 0 , cntr = 0  , len = 0 , siz = nums.size() , diff;
        while( left <= right and right < siz ){  
            if( nums[right] == 0 ){
                    cntr++ ;
                if( cntr > k ){
                    while( cntr > k )
                    {
                        left++ ;
                    if( left > 0 and nums[left-1] == 0 )
                            cntr-- ;
                    }
                }
            }
             right++ ;
                
         diff = right - left ;
                    len = max( len , diff) ;    
    }
        return len ;
    }
    };