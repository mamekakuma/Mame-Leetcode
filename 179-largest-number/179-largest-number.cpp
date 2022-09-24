class Solution {
public:
    static bool custom( string x , string y){
        int sizX = x.length() , sizY = y.length() ;
        if(( sizX < sizY ) or ( sizX > sizY )){
            if( y.find(x) == 0 or x.find(y) == 0  ) 
                    return (x+y) < (y+x) ;
        }
       return (x < y) ;
    }
    string largestNumber(vector<int>& nums) {
        vector<string>strNums ;
        for(auto x : nums)
                strNums.emplace_back( to_string(x) ) ;
        sort(strNums.rbegin() , strNums.rend() , custom ) ;
        string ans ,temp ;
        bool bul = false ;
        for( auto itr : strNums )
                temp += itr ;
        for( int i = 0 ; i < temp.length() ; i++){
            if(temp[i] != '0' )
                    bul = true ;
            if(bul)
                ans += temp[i];
        }
        if(ans.empty())
            ans='0' ;
        return ans ;
    }
};