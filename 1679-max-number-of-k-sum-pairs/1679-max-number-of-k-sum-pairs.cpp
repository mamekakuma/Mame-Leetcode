class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        #define f first
        #define s second
        int cntr = 0 , minn ;
        map< int,int > occr ;
        for( auto x : nums )
            occr[x]++ ;
        for( auto &x : occr ){
            if( k == x.f*2 ){
                cntr += x.s/2 ;
                x.s = 0 ;
            }
            else{
                minn = min( x.s , occr[ (k-x.f) ] ) ;
                 cntr += minn ;
                 occr[ (k-x.f) ] -= minn ;
                x.s -= minn ;
            }   
        }
        return cntr ;
    }
};