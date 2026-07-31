class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        nums_diff = {}
        out = []
        

        for j in range(len(nums)):
            nums_diff[target - nums[j]] = j
        
        for i in range(len(nums)):
            if nums[i] in nums_diff and i != nums_diff[nums[i]]:
                out.append(i)
                out.append(nums_diff[nums[i]])
                break
        return out
        
        # nums[i] = target - nums[j]

