class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        # brute force solution O(n^2)
        '''
        output = []
        for i in range(len(nums)):
            product = 1
            for j in range(len(nums)):
                if j != i:
                    product *= nums[j]
            output.append(product)

        return output
        '''

        # O(n) solution with division
        output = []
        zero_count = 0
        product = 1

        for i in range(len(nums)):
            if nums[i] == 0:
                zero_count += 1
            else:
                product *= nums[i]
        if zero_count > 1:
            return [0] * len(nums)

        for index, num in enumerate(nums):
            if zero_count > 0:
                if num:
                    output.append(0)
                else:
                    output.append(product)
            else:
                output.append(product//num)

        return output
        
