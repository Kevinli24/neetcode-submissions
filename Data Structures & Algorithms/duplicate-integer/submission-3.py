from collections import Counter

class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:
        out = set()
        for num in nums:
            out.add(num)
        if len(nums) == len(out):
            return False
        return True
