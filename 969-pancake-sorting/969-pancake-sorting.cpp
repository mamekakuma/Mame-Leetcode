class Solution {
public:
    vector< int > ans ;
    void panRev( vector<int>&arr ,int target ){
        ans.emplace_back(target) ;
        reverse(arr.begin() , arr.begin()+target ) ;
    }
    vector<int> pancakeSort(vector<int>& arr) {
        int target = arr.size() ;
        while( target > 1 ){
            if( arr[0] == target )
                panRev( arr , target ) ;
            else if( arr[target-1 ] != target ){
             auto idx = find(arr.begin(),arr.end() ,target) - arr.begin();
                {
                panRev( arr , idx+1 ) ;
                panRev( arr , target ) ;
                }
            }    
            target-- ;
        }
    return ans ;
    }
};