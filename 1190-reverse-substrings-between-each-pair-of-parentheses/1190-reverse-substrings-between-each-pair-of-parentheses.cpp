class Solution {
public:
    string reverseParentheses(string s) {
        string temp ;
        stack<char>st; 
        for( auto x : s ){
            if( x == ')'){
                while( st.top() != '(')
                     {         
                    temp+=st.top();
                    st.pop();
                    }
                st.pop() ;
                for( auto x : temp )
                    st.push(x) ;
                temp = ""; 
            }
            else
                st.push(x) ;
        }
        while( !st.empty())
            {
            temp+=st.top();
            st.pop() ;
            }
         reverse(temp.begin(),temp.end()) ;
        return temp ;
    }
};