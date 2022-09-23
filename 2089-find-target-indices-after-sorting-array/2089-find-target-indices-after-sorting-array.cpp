class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end()) ;
        vector<int>indices ;
        for(int i = 0 ; i < nums.size() ; i++)
            if( nums[i] == target)
                    indices.emplace_back(i) ;
    return indices ;
    }
};