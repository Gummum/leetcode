/***
 * @Author: gongbinwen
 * @Date: 2023-07-25 15:08
 * @LastEditTime: 2023-07-25 15:23
 * @FilePath: \leetcode\53.最大子数组和.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

// @lc code=start
class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = nums[0];
        int tmp = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            tmp += nums[i];
            if (tmp<nums[i])
            {
                tmp = nums[i];
            }
            if (sum < tmp)
            {
                sum = tmp;
            }
        }
        return sum;
    }
};
// @lc code=end
