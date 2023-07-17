/***
 * @Author: gongbinwen
 * @Date: 2023-07-17 18:26
 * @LastEditTime: 2023-07-17 18:46
 * @FilePath: \leetcode\154.寻找旋转排序数组中的最小值-ii.cpp
 * @Description:pass,但有点懵
 * @
 */
/*
 * @lc app=leetcode.cn id=154 lang=cpp
 *
 * [154] 寻找旋转排序数组中的最小值 II
 */

// @lc code=start
class Solution
{
public:
    int findMin(vector<int> &nums)
    {
        int left = 0, right = nums.size() - 1;
        while (left < right)
        {
            int mid = (right + left) / 2;
            if (nums[mid] < nums[right])
            {
                right = mid;
            }
            else if (nums[mid] > nums[right])
            {
                left = mid + 1;
            }
            else
            {
                // 应对特殊情况，全是重复的，只有两三个不同的数
                right -= 1;
            }
        }
        return nums[left];
    }
};
// @lc code=end
/*
    1.取第一个为基准数，第一个小于的即为最小值
    2.二分查找
        注意边界
            while
            left=mid+1

*/
