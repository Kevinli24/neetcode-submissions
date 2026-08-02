class Solution {
public:
    int maxArea(vector<int>& heights) {
        /*
        Initial thoughts:
        Dynamic Sliding window 
        Area = min(height[L], height[R]) * (R - L)

        Want to find start with max R-L first

        */
        int result = 0;

        int start = 0;
        int end = heights.size()-1;

        for (int i = 0; i < heights.size()-1; ++i)
        {
            int area = (end - start) * std::min(heights[end], heights[start]);
            result = std::max(result, area);

            if (heights[start] >= heights[end])
            {
                --end;
            }
            else
            {
                ++start;
            }
        }
        return result;
    }
    
};
