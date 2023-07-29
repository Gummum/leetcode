/***
 * @Author: gongbinwen
 * @Date: 2023-07-29 14:22
 * @LastEditTime: 2023-07-29 14:22
 * @FilePath: \leetcode\剑指 Offer 57 - II. 和为s的连续正数序列.cpp
 * @Description:pass
 * @
 */

/*
输入一个正整数 target ，输出所有和为 target 的连续正整数序列（至少含有两个数）。

序列内的数字由小到大排列，不同序列按照首个数字从小到大排列。

示例 1：
输入：target = 9
输出：[[2,3,4],[4,5]]

示例 2：
输入：target = 15
输出：[[1,2,3,4,5],[4,5,6],[7,8]]
 
限制：

1 <= target <= 10^5

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/he-wei-sde-lian-xu-zheng-shu-xu-lie-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution
{
public:
    vector<vector<int>> findContinuousSequence(int target)
    {
        vector<vector<int>> result;
        if (target == 1)
            return result;
        int left = 1, right = 2;
        while (right > left)
        {
            if (target < sum(left, right))
                left++;
            else if (target > sum(left, right))
                right++;
            else
            {
                vector<int> tmp;
                for (int i = left; i <= right; i++)
                {
                    tmp.push_back(i);
                }
                result.push_back(tmp);
                left++;
            }
        }
        return result;
    }
    int sum(int i, int j)
    {
        return (j - i + 1) * (i + j) / 2;
    }
};