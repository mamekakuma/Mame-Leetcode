class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector< string > fizz ;
        for( int i = 1 ; i <= n  ; i++ ){
            if( i%3 == 0 and i%5 == 0 )
                fizz.emplace_back( "FizzBuzz" );
            else if( i%3 == 0 )
                fizz.emplace_back( "Fizz" );
            else if( i%5 == 0 )
                fizz.emplace_back( "Buzz" );
            else
                fizz.emplace_back( to_string(i) );
        }
        return fizz ;
    }
};