class Solution {
public:
    int findDist(int idx , deque<int>&indexes ){
        while(!indexes.empty() ){
            if( indexes.front() > idx )
                return indexes.front() - idx ;
            indexes.pop_front() ;       
        }
        return 1000000 ;
    }
    vector<int> dailyTemperatures(vector<int>& temperatures) {
         deque< int >NearMin[71];
        vector<int> ans ;
        int siz = temperatures.size() , val , val1 , temp ;
        for(int i = 0 ; i < siz ; i++ )
            NearMin[ temperatures[i]-30 ].push_back(i);

        for( int i = 0 ; i < siz ; i++ ){
            val = temperatures[i]-30 ;
            val1 = val ;
            temp = 1000000 ;
            while( val < 70 ){
                val++ ;
                val1 = findDist( i , NearMin[val] ) ;        
                temp = min( temp,val1 );
            }
            if(temp == 1000000)
                temp = 0 ;
            ans.emplace_back( temp );
             
        }
        return ans ;  
}
};