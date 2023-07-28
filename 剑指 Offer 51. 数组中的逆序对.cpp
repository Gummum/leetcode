/***
 * @Author: gongbinwen
 * @Date: 2023-07-28 14:03
 * @LastEditTime: 2023-07-28 16:57
 * @FilePath: \leetcode\剑指 Offer 51. 数组中的逆序对.cpp
 * @Description:pass
 * @
 */

/*
在数组中的两个数字，如果前面一个数字大于后面的数字，则这两个数字组成一个逆序对。输入一个数组，求出这个数组中的逆序对的总数。

示例 1:
输入: [7,5,6,4]
输出: 5
 
限制：

0 <= 数组长度 <= 50000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/shu-zu-zhong-de-ni-xu-dui-lcof
*/
class Solution
{
public:
    int mergeSort(vector<int> &nums, vector<int> &tmp, int left, int right)
    {
        if (left >= right)
            return 0;
        int mid = (right + left) / 2;
        int count = mergeSort(nums, tmp, left, mid) + mergeSort(nums, tmp, mid + 1, right);
        int i = left, j = mid + 1, tmpIndex = 0;
        while (i <= mid && j <= right)
        {
            if (nums[i] <= nums[j])
            {
                tmp[tmpIndex++] = nums[i++];
                count += j - (mid + 1);
            }
            else
                tmp[tmpIndex++] = nums[j++];
        }
        while (i <= mid)
        {
            tmp[tmpIndex++] = nums[i++];
            count += j - (mid + 1);
        }
        while (j <= right)
            tmp[tmpIndex++] = nums[j++];
        for (int k = 0; k < right - left + 1; k++)
            nums[k + left] = tmp[k];
        return count;
    }
    int reversePairs(vector<int> &nums)
    {
        int size = nums.size();
        if (size <= 1)
            return 0;
        vector<int> tmp(size, 0);
        return mergeSort(nums, tmp, 0, size - 1);
    }
};