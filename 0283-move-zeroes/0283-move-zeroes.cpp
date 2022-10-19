class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int left = 0 , right = 1 ;
        while( right < nums.size() ){
            if(nums[left] == 0 and nums[right] != 0 ){
                swap(nums[left] , nums[right]) ; 
                left++ ;
            }
            if( nums[left] != 0 )
                left++ ;
            right++ ;
        }
    }
};