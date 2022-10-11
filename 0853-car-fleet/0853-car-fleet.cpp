class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        unordered_map< int , int > speedMap ;
        int siz = speed.size() ,fleet = 1 ;
        double temp , temp1 ;
        for( int i = 0 ; i < siz ; i++ )
            speedMap[position[i] ] = speed[i] ;
        sort(position.rbegin() , position.rend());
        temp =  (target-position[0]) / (double)speedMap[ position[0] ]  ;
      for( int i = 1 ; i < siz ; i++ ){
        temp1 =  (target-position[i]) / (double)speedMap[ position[i] ] ;
            if( temp1 > temp  )
                {
                fleet++;
                temp = temp1 ;
                }    
      }
       return fleet ; 
    }
};