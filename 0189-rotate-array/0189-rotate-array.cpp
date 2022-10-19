class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int siz = nums.size() ;
        k%=siz ;
        reverse( nums.begin() , nums.begin()+(siz-k) ) ;  
        reverse(nums.begin()+(siz-k) , nums.end() ) ; 
        reverse(nums.begin() , nums.end() ) ; 
    }
};