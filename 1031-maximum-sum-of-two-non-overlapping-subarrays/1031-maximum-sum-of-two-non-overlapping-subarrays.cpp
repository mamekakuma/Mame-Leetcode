class Solution {
public:
    vector<int>nums ;
    int siz ; 
    int slide( int left , int secondLen ){
    int right = left+secondLen-1 ,sum = accumulate(nums.begin()+left , nums.begin()+(left+secondLen) , 0) ;
        int maxSum = sum ;
        while(right+1 < siz ){
            right++ ; 
            sum -= nums[left] ;
            sum += nums[right] ;
            left++ ;
         maxSum = max( maxSum , sum ) ;
        }
        return maxSum ;
    }
   int bruteForce(int firstLen , int secondLen ){
int left = 0 , right = firstLen-1 , maxSum = 0;
int sum = accumulate(nums.begin() , nums.begin()+firstLen , 0) , totSum ; 
       while( right+secondLen < siz ){
         totSum = sum + slide(right+1 , secondLen ) ;
         maxSum = max( maxSum , totSum ) ;
            right++ ; 
            sum -= nums[left] ;
            sum += nums[right] ;
            left++ ;
       }
       return maxSum ;
    }
    int maxSumTwoNoOverlap(vector<int>& nums, int firstLen, int secondLen) {
        this->nums = nums ;
        this->siz = nums.size() ;
    return max(bruteForce(firstLen , secondLen) , bruteForce(secondLen , firstLen)) ;
        }
};