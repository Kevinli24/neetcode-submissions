class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> diffindex;
        std::vector<int> result;

        for (int i = 0; i < nums.size(); ++i)
        {
            diffindex[target - nums[i]] = i;
        }

        for (int j = 0; j < nums.size(); ++j)
        {
            if (diffindex.count(nums[j]) && (diffindex[nums[j]] != j))
            {
                result.push_back(j);
                result.push_back(diffindex[nums[j]]);
                return result;
            }
        }

        
    }
};
