class Solution {
public:
    int minSteps(string s, string t) {
      vector<int>data1(26,0), data2(26,0);
        int minStep = 0 ;
      for( auto x : s )
          data1[int(x)-97]++ ;
      for( auto x : t)
          data2[int(x)-97]++ ;
    for( int i = 0 ; i < 26 ; i++ )
        minStep += abs(data1[i]-data2[i]) ;
    return minStep ;
        }
};