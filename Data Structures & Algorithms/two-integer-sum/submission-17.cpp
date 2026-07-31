class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> valindex;
        for (int i = 0; i < nums.size(); ++i)
        {
            valindex[nums[i]] = i;
        }

        for (int i = 0; i < nums.size(); ++i)
        {
            int diff = target - nums[i];
            if (valindex.count(diff) && valindex[diff] != i)
            {
                return {i, valindex[diff]};
            }
        }
        return {};

    }
};
