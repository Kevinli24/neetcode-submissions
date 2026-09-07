class Solution {
public:
    bool isPalindrome(string s) {
        int right = s.size()-1;
        int left = 0;

        while (left < right)
        {
            
            while (std::isalnum(s[left]) == false)
            {
                ++left;
            }
            while ((std::isalnum(s[right]) == false))
            {
                --right;
            }

            if (left > right)
            {
                return true;
            }

            if (std::tolower(s[left]) != std::tolower(s[right]))
            {
                return false;
            }
            ++left;
            --right;
        }
        return true;
    }
};
