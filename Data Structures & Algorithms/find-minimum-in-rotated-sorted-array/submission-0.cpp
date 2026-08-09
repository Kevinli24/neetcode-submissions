class Solution {
public:
    int findMin(vector<int> &nums) {
        

        // Binary search algorithm
        // keep running track of min


        int left = 0;
        int right = nums.size() - 1;
        int minnum = nums[(left+right)/2];

        while (left != right)
        {
            int midpoint = (left + right)/2;

            if (nums[midpoint] < nums[right])
            {
                // midpoint in left half
                minnum = std::min(minnum, nums[midpoint]);

                right = midpoint;

            }
            else if (nums[midpoint] > nums[right])
            {
                // midpoint in right half
                minnum = std::min(minnum, nums[right]);

                left = midpoint + 1;
            }
        }
        return nums[left];
    }
};
