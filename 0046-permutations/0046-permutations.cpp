class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector< vector<int> >ans ;
        vector<int>cpy = nums ;
        ans.push_back( cpy ) ;
        while( next_permutation(cpy.begin(),cpy.end()) )
            ans.push_back( cpy ) ;
        while( prev_permutation(nums.begin(),nums.end()) )
            ans.push_back( nums ) ;
         return ans ;   
    }
};