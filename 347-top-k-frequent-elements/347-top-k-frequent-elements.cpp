class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector< int > tops ;
        vector< pair< int , int > >freq ;
        unordered_map< int, int >occr ;
        for(auto val : nums )
            occr[ val ]++ ;
        for( auto itr : occr )
            freq.push_back( { itr.second , itr.first } ) ;
        sort( freq.rbegin(), freq.rend() ) ;
        for( int i = 0 ; i < k ; i++ )
            tops.emplace_back( freq[i].second ) ;
    return tops ;
    }
};