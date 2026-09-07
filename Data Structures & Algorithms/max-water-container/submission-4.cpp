class Solution {
public:
    int maxArea(vector<int>& heights) {
        // want to start with the max width, because ideally that gives the max area
        int maxarea = 0;

        int left = 0;
        int right = heights.size() - 1;

        int height;
        while (left < right)
        {
            height = std::min(heights[left], heights[right]);
            maxarea = std::max(maxarea, (right-left) * height);

            if (heights[left] <= heights[right])
            {
                ++left;
            }
            else
            {
                --right;
            }
        }
        return maxarea;
    }
};
