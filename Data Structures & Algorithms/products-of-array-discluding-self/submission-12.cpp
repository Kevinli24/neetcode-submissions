class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(), 1);
        int zerocount = 0;
        int zeroindex;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == 0)
            {
                zerocount++;
                zeroindex = i;
            }
        }
        if (zerocount > 1)
        {
            return std::vector<int>(nums.size(), 0);
        }
        if (zerocount == 1)
        {
            int oneproduct = 1;
            for (int i = 0; i < nums.size(); ++i)
            {
                if (i != zeroindex)
                {
                    oneproduct *= nums[i];
                }
            }
            std::vector<int> onezero(nums.size(), 0);
            onezero[zeroindex] = oneproduct;
            return onezero;
        }
        else
        {
            int prefix = 1;
            for (int i = 0; i < nums.size(); ++i)
            {
                result[i] = prefix;
                prefix *= nums[i];
            }

            int suffix = 1;
            for (int j = nums.size()-1; j > -1; --j)
            {
                result[j] *= suffix;
                suffix *= nums[j];
            }
        }
        return result;

    }
};
