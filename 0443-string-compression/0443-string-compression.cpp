class Solution {
public:
    int left = 0 , right = 1 , len ; 
    void compress(vector<char>& chars , string &s ){
                s += chars[left] ;
                len = right-left  ;
                if( len > 1 ) s += to_string( len ) ;
                left = right ;
    }
    int compress(vector<char>& chars) {
        string s ;
        int siz = chars.size() ;
        while( right < siz ){
            if( chars[left] != chars[right] )
                compress( chars , s );
            right++ ;
        }
    compress( chars , s );
        chars.clear();
        for( auto x : s)
            chars.emplace_back(x) ;
        return s.length();
    }
};