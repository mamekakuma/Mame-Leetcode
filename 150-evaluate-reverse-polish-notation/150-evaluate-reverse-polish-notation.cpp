class Solution {
public:
     long long eval(long long  a , long long b , string c ){
         if( c=="+")
             return a+b ;
         if( c=="/")
             return a/b ;
         if( c=="-")
             return a-b ;
        return (a*b) ;
     }
    long long evalRPN(vector<string>& tokens) {
        stack< string > st ;
        int a , b ;
        string oprs="/-+*";
        for( auto x : tokens ){
            if( oprs.find(x) != string::npos ){
                b = stoll( st.top() ) ;
                st.pop();
                 a = stoll( st.top() ) ;
                st.pop();
                st.push( to_string( eval( a,b,x ) ) );
            }
            else
                st.push(x);
        }
      return stoll(st.top());  
    }
};