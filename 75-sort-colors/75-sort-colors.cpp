class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int>Map(3,0), ans;
        for(auto x : nums )
            Map[x]++ ;
        for(int i = 0 ; i < 3 ; i++ )
            while( Map[i]-- )
                    ans.emplace_back(i) ;
           nums = ans ;             
        
    }
};