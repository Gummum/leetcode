/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

// @lc code=start
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int area = 0, left = 0, right = height.size() - 1;
        while (left < right)
        {
            int h = min(height[left], height[right]);
            area = max(area, h * (right - left));
            while (left < right && h >= height[right])
                right--;
            while (left < right && h >= height[left])
                left++;
        }
        return area;
    }
};
// @lc code=end
/*
    i是下标，height[i]是高度
    algorithms:
        转换成求矩形面积:(j-i)*min(height[i],height[j])
    超时了:
        优化o(n^2)->O(n)

*/
