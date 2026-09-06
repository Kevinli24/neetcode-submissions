class Solution {
public:
    bool isValid(string s) {
        std::vector<char> fakestack;

        for (char c : s)
        {
            if ((c == '(') || (c == '{') || (c == '['))
            {
                fakestack.push_back(c);
            }
            else
            {
                if (fakestack.size() == 0)
                {
                    return false;
                }
                else if (c == '}')
                {
                    if (fakestack[fakestack.size()-1] != '{')
                    {
                        return false;
                    }
                    fakestack.pop_back();
                }
                else if (c == ')')
                {
                    if (fakestack[fakestack.size()-1] != '(')
                    {
                        return false;
                    }
                    fakestack.pop_back();
                }
                else if (c == ']')
                {
                    if (fakestack[fakestack.size()-1] != '[')
                    {
                        return false;
                    }
                    fakestack.pop_back();
                }
            
            }
        }
        if (fakestack.size() == 0)
        {
            return true;
        }
        return false;
    }
};
