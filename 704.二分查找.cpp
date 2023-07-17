/***
 * @Author: gongbinwen
 * @Date: 2023-07-17 17:06
 * @LastEditTime: 2023-07-17 17:06
 * @FilePath: \leetcode\704.二分查找.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=704 lang=cpp
 *
 * [704] 二分查找
 */

// @lc code=start
class Solution
{
public:
    int search(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size();
        while (left < right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] == target)
                return mid;
            else if (nums[mid] > target)
            {
                right = mid;
            }
            else
            {
                left = mid + 1;
            }
        }
        return -1;
    }
};
// @lc code=end

/*
    注意区间，取的是左闭右开，所以
        right=nums.size()
        while(left<right)没有等号
        right = mid;

*/