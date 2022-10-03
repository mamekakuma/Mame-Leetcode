class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int maxCoinCollected = 0 ;
        sort( piles.begin() , piles.end() ) ;
        deque< int > coins;
        for( auto val : piles )
            coins.push_back( val );
      while(!coins.empty() ){
          coins.pop_front() ;
          coins.pop_back() ;
          maxCoinCollected += coins.back() ;
          coins.pop_back() ;
      } 
        return maxCoinCollected ;
    }
};