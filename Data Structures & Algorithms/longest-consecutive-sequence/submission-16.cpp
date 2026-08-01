class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        /*
        A sequence starts with the lowest value, then increments by 1.

        First thoughts:
        Find a number, if there's no number - 1, it's the start of a sequence
        --> find min + 1, min + 2, etc... keeping track of length using a counter.

        Then find other start numbers, and keep track of length.

        Find max of all the counters.
        */
        int result = 0;

        unordered_set<int> uniquenums;
        for (int num : nums)
        {
            uniquenums.insert(num);
        }

        for (int j = 0; j < nums.size(); ++j)
        {
            int checkifstart = nums[j] - 1;
            if (uniquenums.count(checkifstart) == 0) // Start of a sequence
            {
                int count = 1;
                int newnum = nums[j];

                for (int k = 0; k < nums.size(); ++k)
                {
                    if (uniquenums.count(newnum+1) == 1)
                    {
                        ++count;
                        newnum = newnum+1;
                    }
                }
                if (count > result)
                    {
                        result = count;
                    }
            }
        }
        return result;
    }
};
