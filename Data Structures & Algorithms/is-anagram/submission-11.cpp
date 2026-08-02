class Solution {
public:
    bool isAnagram(string s, string t) {
        std::unordered_map<char, int> mapfors;
        unordered_map<char, int> mapfort;

        for (const char& c : s)
        {
            mapfors[c]++;
        }
        for (const char& c : t)
        {
            mapfort[c]++;
        }
        if (mapfors == mapfort)
        {
            return true;
        }
        return false;


        
        
    }
};
