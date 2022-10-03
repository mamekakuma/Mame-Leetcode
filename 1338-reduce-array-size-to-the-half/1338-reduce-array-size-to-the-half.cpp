class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map< int,int> occr ;
        for(auto element : arr )
            occr[ element ]++ ;
        vector<int>vals ;
        for( auto itr : occr )
            vals.emplace_back( itr.second ) ;
        sort(vals.rbegin(),vals.rend());
        int siz = arr.size() , temp = 0 ;
        for(int i = 0 ; i < siz ; i++ ){
            temp += vals[i] ;
            if( temp >= siz/2 )
                return i+1 ;
        } 
       return 0 ; 
    }
};