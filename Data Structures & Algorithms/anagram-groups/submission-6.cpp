class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // Brute force
        std::vector<vector<string>> res;

        std::unordered_map<string, vector<string>> anagroups;

        for (string word : strs)
        {
            string key = word;
            sort(key.begin(), key.end());
            anagroups[key].push_back(word);
        }
        
        for (auto& [key, group] : anagroups)
        {
            res.push_back(group);
        }

        return res;
    }
};
