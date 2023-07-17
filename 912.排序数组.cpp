/***
 * @Author: gongbinwen
 * @Date: 2023-07-17 11:29
 * @LastEditTime: 2023-07-17 11:39
 * @FilePath: \leetcode\912.排序数组.cpp
 * @Description:要多看，不然复现不一定会写
 * @
 */

/*
 * @lc app=leetcode.cn id=912 lang=cpp
 *
 * [912] 排序数组
 */

// @lc code=start
class Solution
{
public:
    void quickSort(vector<int> &nums, int leftIndex, int rightIndex)
    {
        if (leftIndex >= rightIndex)
            return;
        int baseIndex = rand() % (rightIndex - leftIndex + 1) + leftIndex;
        swap(nums, baseIndex, leftIndex);
        int baseValue = nums[leftIndex];
        int i = leftIndex + 1, j = rightIndex;
        while (i < j)
        {
            // 从后往前，不然在最后交换时会出错
            while (i < j && nums[j] >= baseValue)
                j--;
            while (i < j && nums[i] <= baseValue)
                i++;
            if (i < j)
            {
                swap(nums, i, j);
            }
        }
        if (baseValue > nums[i])
        {
            swap(nums, leftIndex, i);
        }
        quickSort(nums, leftIndex, i - 1);
        quickSort(nums, i, rightIndex);
    }
    vector<int> sortArray(vector<int> &nums)
    {
        if (nums.size() == 1)
            return nums;
        srand((unsigned)time(NULL));
        quickSort(nums, 0, nums.size() - 1);
        return nums;
    }
    void swap(vector<int> &nums, int i, int j)
    {
        int tmp = nums[i];
        nums[i] = nums[j];
        nums[j] = tmp;
    }
};
// @lc code=end

/*
    归并排序：用的是分治法的思路
        拆解：
        解决：
        合并：
    attention：
        每次排完序需要把tmp合并到nums中
    class Solution
    {
    public:
        vector<int> tmp;
        void mergeSort(vector<int> &nums, int leftIndex, int rightIndex)
        {
            if (leftIndex >= rightIndex)
                return;
            int mid = (leftIndex + rightIndex) / 2;

            mergeSort(nums, leftIndex, mid);
            mergeSort(nums, mid + 1, rightIndex);
            int i = leftIndex, j = mid + 1, cnt = 0;
            while (i <= mid && j <= rightIndex)
            {
                if (nums[i] <= nums[j])
                    tmp[cnt++] = nums[i++];
                else
                    tmp[cnt++] = nums[j++];
            }
            while (i <= mid)
            {
                tmp[cnt++] = nums[i++];
            }
            while (j <= rightIndex)
            {
                tmp[cnt++] = nums[j++];
            }
            for (int i = 0; i < rightIndex - leftIndex + 1; i++)
            {
                nums[i + leftIndex] = tmp[i];
            }
        }
        vector<int> sortArray(vector<int> &nums)
        {
            if (nums.size() == 1)
                return nums;
            tmp.resize(nums.size(), 0);
            mergeSort(nums, 0, nums.size() - 1);
            return nums;
        }
    };
*/
/*
    快速排序：
        双指针相向行驶，相等退出循环
        注意right指针先动，不然在最后交换时会出错
*/