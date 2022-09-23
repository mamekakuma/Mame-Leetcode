class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int siz = nums.size() , cntr ;
        vector<int>ans(siz);
        for(int i = 0 ; i < siz ; i++){
            cntr = 0 ;
            for(int j = 0 ; j < siz ; j++){
                if( i==j){}
                else if( nums[i] > nums[j])
                    cntr++ ;
                }
            ans[i] = cntr ;
            }
        return ans ;
        }

};