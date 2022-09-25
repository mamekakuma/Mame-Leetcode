class Solution {
public:
    int poper(vector<int>&x){
        int temp = x.back() ;
        x.pop_back() ;
        return temp ;
    }
    vector<int> rearrangeArray(vector<int>& nums) {
        sort(nums.begin() , nums.end() );
        int siz = nums.size() , halfSiz;
        halfSiz = siz/2 ;
        vector<int>half, res;
        for( int i = 0 ;i < halfSiz ; i++ ){
            half.emplace_back(nums.back()) ;
            nums.pop_back();
        }
        if( halfSiz*2 < siz ){
            res.push_back(nums.back()) ;
            nums.pop_back();
        }   
          bool bul = false ;                   
        while(!half.empty()){
            if(bul)
                res.emplace_back( poper(half) ) ;
            else
              res.emplace_back( poper(nums) ) ;
            bul =!bul ;     
        }
        return res ; 
    }
};