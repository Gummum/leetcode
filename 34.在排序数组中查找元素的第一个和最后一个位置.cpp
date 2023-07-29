/***
 * @Author: gongbinwen
 * @Date: 2023-07-29 10:05
 * @LastEditTime: 2023-07-29 10:06
 * @FilePath: \leetcode\34.在排序数组中查找元素的第一个和最后一个位置.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=34 lang=cpp
 *
 * [34] 在排序数组中查找元素的第一个和最后一个位置
 */

// @lc code=start
class Solution
{
public:
    vector<int> searchRange(vector<int> &nums, int target)
    {
        vector<int> result(2, -1);
        int size = nums.size();
        if (size == 0)
            return result;
        int left = 0, right = size - 1;
        while (left < right)
        {
            int mid = (left + right) >> 1;
            if (nums[mid] >= target)
                right = mid;
            else
                left = mid + 1;
        }
        if (nums[right] != target)
            return result;
        result[0] = right;
        left = 0, right = size - 1;
        while (left < right)
        {
            int mid = (left + right + 1) >> 1;
            if (nums[mid] <= target)
                left = mid;
            else
                right = mid - 1;
        }
        result[1] = left;
        return result;
    }
};
// @lc code=end
