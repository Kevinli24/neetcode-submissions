class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freqs;
        vector<int> result;

        for (const int& num : nums)
        {
            freqs[num]++;
        }


        vector<vector<int>> buckets(nums.size() + 1);

        for (const auto& [num, frequency] : freqs)
        {
            buckets[frequency].push_back(num);
        }

        for (int frequency = nums.size(); frequency >= 1; frequency--)
        {
            for (int number : buckets[frequency])
            {
                result.push_back(number);

                if (result.size() == k)
                {
                    return result;
                }
            }
        }





        while (k > 0)
        {
            int maxfreq = 0;
            int savenum;
            for (const auto& [number, frequency] : freqs)
            {
                if (frequency > maxfreq)
                {
                    maxfreq = frequency;
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
