class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        nums1.insert( nums1.end(),nums2.begin() , nums2.end()) ;
        sort(nums1.begin() , nums1.end()) ;
        int siz = nums1.size();
        if(siz%2)
            return (double)nums1[siz/2] ;
        else
            return (nums1[siz/2]+nums1[siz/2-1])/2.0 ;
    }
};