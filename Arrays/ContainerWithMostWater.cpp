class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxArea = 0;
        for (int left = 0, right = height.size() - 1;left<right;)
        {
            int currArea = (right - left) * (min(height[left], height[right]));
            maxArea = max(currArea, maxArea);

            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        return maxArea;
    }
};
