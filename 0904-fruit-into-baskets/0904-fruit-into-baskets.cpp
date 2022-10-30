class Solution {
public:
    int totalFruit(vector<int>& fruits) {
      int maxFruits = 1 , left = 0 , right = 0 , siz = fruits.size() , bag1 = fruits[0] , bag2 = -1 , sum, lastChange ;
        while( right < siz-1 ){
            right++ ;
            if( fruits[right] != bag1 and fruits[right] != bag2 and bag2 != -1  ){
                left = lastChange ;
                bag1 = fruits[right-1] ;
                bag2 = fruits[right] ;
            }
           else if( fruits[right] != bag1 and bag2 == -1 )
                bag2 = fruits[right] ;
        if( fruits[right] != fruits[right-1] )
                lastChange = right ;     
        sum = right - left + 1 ;
        maxFruits = max( maxFruits , sum ) ;
        }
        return maxFruits ;
    }
};