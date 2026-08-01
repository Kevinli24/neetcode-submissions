class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> characters;
        for (char c : s)
        {
            if (isalpha(c) || isdigit(c))
            {
                characters.push_back(tolower(c));
            }
        }

        for (int i = 0; i < characters.size() / 2; ++i)
        {
            if (characters[i] != characters[characters.size()-1-i])
            {
                return false;
            }

        }
        return true;
    }
};
