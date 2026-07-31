class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqs;
        vector<int> result;

        for (const int& num : nums)
        {
            freqs[num]++;
        }

        while (k > 0)
        {
            int max = 0;
            int savenum;
            for (const auto& [number, frequency] : freqs)
            {
                if (frequency > max)
                {
                    max = frequency;
                    savenum = number;
                }
            }
            result.push_back(savenum);
            freqs[savenum] = 0;
            k--;
        }
        return result;
    }
};
