class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end()) ;
        int left = 0 , siz = nums.size() , right = k-1 , minDiff = INT_MAX , diff ;
        while(right < siz ){
            diff = nums[right] - nums[left] ;
            minDiff = min( minDiff , diff ) ;
            left++;
            right++ ;
        }
        return minDiff;
    }
};