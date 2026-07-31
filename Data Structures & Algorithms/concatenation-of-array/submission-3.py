class Solution:
    def getConcatenation(self, nums: List[int]) -> List[int]:
        n = len(nums)
        ans = [0] * (2*n)
        # given nums array with length n
        # ans has length 2n, ans[i] = nums[i], ans[i+n] = nums[i]
        # i is from 0 to n-1
        
        for i in range(n):
            ans[i] = nums[i]
        for i in range(n, 2*n):
            ans[i] = nums[i-n]
        
        return ans
