class Solution {
public:
    int findMin(vector<int> &nums) {
        

        // Binary search algorithm
        // keep running track of min


        int left = 0;
        int right = nums.size() - 1;

        while (left != right)
        {
            int midpoint = (left + right)/2;

            if (nums[midpoint] < nums[right])
            {
                // midpoint in left half
                right = midpoint;

            }
            else if (nums[midpoint] > nums[right])
            {
                // midpoint in right half
                left = midpoint + 1;
            }
        }
        return nums[left];
    }
};
