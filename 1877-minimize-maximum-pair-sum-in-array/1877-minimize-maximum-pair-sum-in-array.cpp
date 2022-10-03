class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end()) ;
        int left  = 0  , right = nums.size()-1 , maxSum = INT_MIN , temp ;
    while( left < right ){
        temp = nums[ left ] + nums[ right ] ;
        maxSum = max( temp , maxSum ) ;
        left++ ;
        right-- ;
    }
        return maxSum ;
    }
};