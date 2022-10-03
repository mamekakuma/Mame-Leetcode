class Solution {
public:
    bool isValid(string s) {
        stack<char>checker ;
        for( auto i : s ){
            if(i == '(' or i == '[' or i == '{')
                checker.push(i) ;
            else{
                if( checker.empty() )
                    return false ;
                else if( i == ']')
                if( checker.top() == '[' ) checker.pop() ; else return false ;
                else if( i == ')')
               if ( checker.top() == '(') checker.pop() ; else return false ;
                else
                if( checker.top() == '{' ) checker.pop() ; else return false ; 
            } 
        }
        return ( ( checker.empty() ) ? true : false ) ;
    }
};