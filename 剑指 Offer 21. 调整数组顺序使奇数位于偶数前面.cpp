/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-22 10:18
 * @LastEditTime: 2023-07-22 11:01
 * @FilePath: \leetcode\剑指 Offer 21. 调整数组顺序使奇数位于偶数前面.cpp
 * @Description: pass
 * @
 */

/*
输入一个整数数组，实现一个函数来调整该数组中数字的顺序，使得所有奇数在数组的前半部分，所有偶数在数组的后半部分。

示例：

输入：nums = [1,2,3,4]
输出：[1,3,2,4]
注：[3,1,2,4] 也是正确的答案之一。
 

提示：

0 <= nums.length <= 50000
0 <= nums[i] <= 10000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/diao-zheng-shu-zu-shun-xu-shi-qi-shu-wei-yu-ou-shu-qian-mian-lcof
*/

class Solution
{
public:
    vector<int> exchange(vector<int> &nums)
    {
        if (nums.size() <= 1)
            return nums;

        int left  = 0;
        int right = nums.size() - 1;

        while (left < right)
        {
            while (left < right && !(nums[right] & 0x01))
                right--;
            while (left < right && nums[left] & 0x01)
                left++;
            swap(nums, left, right);
        }

        return nums;
    }

    void swap(vector<int> &nums, int i, int j)
    {
        if (i == j)
            return;
        nums[i] += nums[j];
        nums[j]  = nums[i] - nums[j];
        nums[i] -= nums[j];
    }
};
/*
    当交换的变量是同一个时,会出错
    a = a ^ b
    b = a ^ b
    a = a ^ b
*/