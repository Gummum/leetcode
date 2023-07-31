/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-31 10:51
 * @LastEditTime: 2023-07-31 11:39
 * @FilePath: \leetcode\209.长度最小的子数组.cpp
 * @Description: pass 最优解法，滑动窗口
 * @
 */

/*
 * @lc app=leetcode.cn id=209 lang=cpp
 *
 * [209] 长度最小的子数组
 */

// @lc code=start
class Solution
{
public:
    int minSubArrayLen(int target, vector<int> &nums)
    {
        int minLength = nums.size() + 1;
        int left = 0, right = 0;
        int sum = 0;
        while (right < nums.size())
        {
            sum += nums[right++];
            while (sum >= target)
            {
                if(right - left < minLength)
                    minLength = right - left;
                sum -= nums[left++];
            }
        }
        return minLength == (nums.size() + 1) ? 0 : minLength;
    }
};
// @lc code=end
