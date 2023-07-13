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
        int area = 0;
        for (int i = 0; i < height.size() - 1; i++)
        {
            for (int j = i + 1; j < height.size(); j++)
            {
                int tArea = (j - i) * min(height[i], height[j]);
                if (tArea > area)
                    area = tArea;
            }
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
        优化

*/
