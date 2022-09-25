class Solution(object):
    def kthLargestNumber(self, nums, k):
        ints =[]
        for i in nums:
            ints.append(int(i))
        ints.sort( reverse = True)
        return str(ints[k-1])
            
        