class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map< string, bool > checked ;
        unordered_map< string , int > kVal ;
        string temp ;
        int k ;
        vector<string>ans ;
        for( auto x : names ){
            if( checked[x] ){
                k = kVal[x] + 1 ;
                while( k ){
                    temp = x + '(' + to_string(k) + ')' ;
                    if( !checked[temp] ){
                        checked[temp] = true ;
                        ans.emplace_back(temp) ;
                        kVal[x] = k ;
                        break ;
                    }
                    k++ ;
                }
            }
            else{
            checked[x] = true ;
            ans.emplace_back(x) ;
            }
        }
        return ans ;
    }  
}; 