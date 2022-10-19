class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int siz1 = pushed.size() , siz2 = popped.size() , pt1 = 0 , pt2 = 0 ;
        stack< int > temp  ;
        while( pt2 < siz2 ){
            if( !temp.empty() and temp.top() == popped[ pt2 ] ){
                temp.pop() ;
                pt2++ ;
            }
            else{
                if(pt1 < siz1 ) temp.push( pushed[ pt1++ ] ) ;
                else break ;  
            }
                
        }
        if( temp.empty() and pt2 == siz2 )
            return true ;
        return false ;
    }
};