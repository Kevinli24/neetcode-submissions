class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        maxcount = 1
        count = 1

        allzeros = 1
        for i in range(len(nums)):
            if (nums[i] == 1):
                allzeros = 0
        if (allzeros == 1):
            return 0

        if len(nums) < 2:
            return 1


        for i in range (len(nums)-1):
            if (nums[i+1] == 1) and (nums[i] == 1):
                count += 1
                if (count >= maxcount):
                    maxcount = count
            else:
                count = 1
                
            
        return maxcount

            
            
            

            
        