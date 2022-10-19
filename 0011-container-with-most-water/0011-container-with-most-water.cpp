;class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0 , right  = height.size()-1 , temp , area = 0 ;
        while( left < right ){
            temp = min( height[left] , height[right]) ;
            temp*=(right-left) ;
            area = max( temp , area );
            ( height[right] < height[left] ) ? right-- : left++ ;    
        }
        return area ;
    }
};