/***
 * @Author: gongbinwen
 * @Date: 2023-07-22 16:43
 * @LastEditTime: 2023-07-24 09:31
 * @FilePath: \leetcode\54.螺旋矩阵.cpp
 * @Description: not pass
 * @
 */

/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> result;
        int n = min(matrix[0].size(), matrix.size());
        if (matrix.size() == 1)
            return matrix[0];
        if (matrix[0].size() == 1)
        {
            for (int i = 0; i < matrix.size(); i++)
            {
                result.push_back(matrix[i][0]);
            }
            return result;
        }
        int i = 0;
        int j = 0;
        for (int k = 0; k < (n + 1) / 2; k++)
        {
            i = k;
            j = k;
            for (; j < matrix[0].size() - k - 1; j++)
            {
                result.push_back(matrix[i][j]);
            }
            for (; i < matrix.size() - k - 1; i++)
            {
                result.push_back(matrix[i][j]);
            }
            for (; j > 0 + k; j--)
            {
                result.push_back(matrix[i][j]);
            }
            for (; i > 0 + k; i--)
            {
                result.push_back(matrix[i][j]);
            }
        }
        if ((matrix.size() == matrix[0].size()) && matrix[0].size() % 2)
            result.push_back(matrix[i][j]);
        return result;
    }
};
// @lc code=end
/*
输入：
[[2,3,4],[5,6,7],[8,9,10],[11,12,13],[14,15,16]]
输出：
[2,3,4,7,10,13,16,15,14,11,8,5,6,9,12,9]
预期结果：
[2,3,4,7,10,13,16,15,14,11,8,5,6,9,12]
*/
