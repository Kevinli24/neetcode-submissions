class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = -10000;
        int currentsum = 0;

// if current sum < 0 && nums[i] >= 0, currentsum = nums[i]

        for (int i = 0; i < nums.size(); ++i)
        {
            if (currentsum < 0 && nums[i] > currentsum)
            {
                currentsum = nums[i];
                maxsum = std::max(maxsum, currentsum);
            }    
            else // 
            {
                currentsum += nums[i];
                maxsum = std::max(maxsum, currentsum);
            }
        }
        return maxsum;

    }
};
