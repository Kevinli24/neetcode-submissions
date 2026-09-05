class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxlen = 0;
        std::unordered_set<char> unistr;
        int left = 0;

        for (int right = 0; right < n; ++right)
        {
            while (unistr.count(s[right]) == 1)
            {
                unistr.erase(s[left]);
                ++left;
            }
            unistr.insert(s[right]);
            maxlen = std::max(maxlen, right-left+1);
        }
        return maxlen;

    }
};
