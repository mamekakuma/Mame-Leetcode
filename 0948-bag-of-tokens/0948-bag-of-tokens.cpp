class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
     int left = 0 , right = tokens.size()-1 , score = 0 ;
     sort( tokens.begin() ,tokens.end() ) ;
     while( left <= right ){
         if( power >= tokens[left] ){
             score++;
             power -= tokens[left] ;
             left++ ;
         }
         else if( score and left != right ){
             power += tokens[right] ;
             score-- ;
             right--;
         }
         else
             break ;
     } 
        return score ;
    }
};