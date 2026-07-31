class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # brute force solution O(n^2)
        output = []
        for i in range(len(nums)):
            product = 1
            for j in range(len(nums)):
                if j != i:
                    product *= nums[j]
            output.append(product)

        return output