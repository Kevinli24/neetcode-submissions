class Solution {
public:
    bool isValid(string s) {
        /*
        Can use a vector, push_back (, [, { 
        But if encounter }, check last element to see if it's the correct bracket. If not, return false.
        If its correct, pop. Then check size of the vector in the end, if its 0, return true
        */

        vector<char> postfix;


        for (char& bracket : s)
        {
            if (bracket == '(' || bracket == '{' || bracket == '[')
            {
                postfix.push_back(bracket);
            }
            else if (bracket == ')' && postfix.size() > 0)
            {
                if (postfix[postfix.size()-1] == '(')
                {
                    postfix.pop_back();
                }
                else
                {
                    return false;
                }
            }
            else if (bracket == '}' && postfix.size() > 0)
            {
                if (postfix[postfix.size()-1] == '{')
                {
                    postfix.pop_back();
                }
                else
                {
                    return false;
                }
            }
            else if (bracket == ']' && postfix.size() > 0)
            {
                if (postfix[postfix.size()-1] == '[')
                {
                    postfix.pop_back();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }

        }
            
        
        if (postfix.size() > 0)
        {
            return false;
        }
        return true;
    }
};
