class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /*
        Ideas
        - can use a map that stores <target - nums[j], j>
        - Loop over nums using i, if it finds the value in the map AND i != j, return i, j
        */

        vector<int> result;

        std::unordered_map<int, int> diffandj;

        for (int j = 0; j < nums.size(); ++j)
        {
            diffandj[target-nums[j]] = j;
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            if (diffandj.count(nums[i]) > 0 && diffandj[nums[i]] != i)
            {
                result.push_back(std::min(i, diffandj[nums[i]]));
                result.push_back(std::max(i, diffandj[nums[i]]));
                return result;
            }
        }

        return result;

    }
};
