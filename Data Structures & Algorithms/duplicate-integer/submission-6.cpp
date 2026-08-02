class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> uniquenums;
        uniquenums.insert(nums.begin(), nums.end());
        if (uniquenums.size() == nums.size())
        {
            return false;
        }
        return true;

    }
};