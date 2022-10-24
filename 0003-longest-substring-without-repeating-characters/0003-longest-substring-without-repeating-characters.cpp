class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int len = 0 , left = 0 , right = 0 ,diff , siz = s.length();
        unordered_map< char , bool >check ;
        while( right <= siz ){
             diff = right-left ;
                len = max( len , diff) ;
            if( !check[ s[right] ] )
                {
                check[ s[right] ] = true ;
                right++ ;
            }
            else{ 
            while( check[ s[right] ] ){
                check[ s[left] ] = false ;
               left++ ;
            }
           }
        }
        return len ;
    }
};