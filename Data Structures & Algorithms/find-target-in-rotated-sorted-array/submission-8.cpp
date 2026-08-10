class Solution {
public:
    int search(vector<int>& nums, int target) {
        // find index of min - using binary search

        int left = 0;
        int right = nums.size() - 1;

        while (left != right)
        {
            int mid = (left + right) / 2;

            if (nums[mid] < nums[right])
            {
                right = mid;
                // check left half
            }
            if (nums[mid] > nums[right])
            {
                // check right half
                left = mid + 1;
            }
        }
        // left and right both give us index for the minimum value in nums
        int minindex = left;

        // reassign left and right for new binary search to find targe value
        int leftnew = minindex;
        int rightnew = (minindex + nums.size()-1) % nums.size();

        int halfway = nums.size();

        while (halfway != 0)
        {
            halfway = halfway / 2;
            int mid = (leftnew+halfway) % nums.size();

            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] < target)
            {
                // check "right half"
                leftnew = mid+1;
            }
            else if (nums[mid] > target)
            {
                // check "left half"
                rightnew = (nums.size()+mid-1) % nums.size();
            }
        }
        return -1;

    }
};
