class Solution {
public:
    string removeDigit(string number, char digit) {
        string res ,temp ;
        for( int i=0 ; i<number.length() ; i++ ){
            temp="";
            if( number[i] == digit ){
                temp += number.substr(0,i) ;
                temp += number.substr(i+1) ;
                res = max( res , temp ) ;
            }
        }
        return res;
    }
};