class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
      vector<int>cpy = nums ; 
    sort(cpy.begin() , cpy.end()) ;
    int cntr = 0 , siz = nums.size() , left = 0 , val;
    int right = siz-1 , sum ;
    while( left < right ){
        sum = cpy[left] + cpy[right];
        if( sum == target )
            break ;
        else if( sum < target )
            left++ ;
        else right-- ;
    }
        vector<int>ans ;
        for(int i = 0 ; i < siz ; i++){
            val = nums[i] ;
            if( cpy[left] == val or cpy[right] == val){
                cntr++ ;
            ans.emplace_back(i) ;
            }
            if(cntr == 2 )
                break;
            }
        return ans ;
    }
    };