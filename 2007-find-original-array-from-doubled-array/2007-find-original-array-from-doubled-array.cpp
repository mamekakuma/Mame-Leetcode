class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
       int  siz = changed.size() , cntr = 0 ;
        sort(changed.rbegin(),changed.rend());
        vector<int>check(100001,0) , ans ;
        for(auto itr : changed )
            check[itr] ++ ;
        if(siz%2 )
                return {} ;
        for( int i = 0 ; i < siz ; i++ ){
            if( changed[i]%2==0 and check[ changed[i] ] > 0  and check[changed[i]/2 ]>0 )
            {
                check[changed[i]]-- ;
                check[changed[i]/2]--;
                ans.emplace_back(changed[i]/2);
            }
            }
        auto it = find(ans.begin(),ans.end() , 0) ;
        if((it != ans.end() and check[0] < 0) or ans.size() < (siz/2) )
            return {} ;
        return ans ;
    }
};