class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        /*
        For any zero in nums, all products will be zero except at nums[i] == 0.
        If there's two zeros, product will always be zero.
        */
        int zero_count = 0;
        int index = 0;
        int zeroindex;
        for (int num : nums)
        {
            if (num == 0)
            {
                zero_count++;
                zeroindex = index;
            }
            ++index;
        }

        if (zero_count >= 2)
        {
            vector<int> result1(nums.size(), 0);
            return result1;
        }
        if (zero_count == 1)
        {
            int oneproduct = 1;
            for (int i = 0; i < nums.size(); ++i)
            {
                if (i != zeroindex)
                {
                    oneproduct *= nums[i];
                }
            }
            vector<int> result2(nums.size(), 0);
            result2[zeroindex] += oneproduct;
            return result2;
        }
        else
        {
            int productnozeros = 1;
            for (int i = 0; i < nums.size(); ++i)
            {
                productnozeros *= nums[i];
            }
            vector<int> resultnozeros;

            for (int i = 0; i < nums.size(); ++i)
            {
                resultnozeros.push_back(productnozeros/nums[i]);
            }

            return resultnozeros;


        }


    }
};
