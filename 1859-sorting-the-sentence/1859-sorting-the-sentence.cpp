class Solution {
public:
    string sortSentence(string s) {
        vector< string > order(10,"done") ;
        string temp , ans ;
        istringstream str(s) ;
        while(str >> temp )
            order[ temp.back()-48 ] = temp.substr(0 , temp.length()-1) ;
        for(int i = 1 ; i < 10 ; i++)
            {
            if( order[i] == "done")
                break;
            ans += (order[i] + ' ') ;
        }
         ans = ans.substr(0, ans.length()-1) ;  
        return ans ;
        
    }
};