/***
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-01 20:49
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-01 20:59
 * @FilePath: \leetcode\18.四数之和.cpp
 * @Description:pass 在三数之和的基础上，再加一个for,同时注意剪纸和求和溢出
 * @
 */

/*
 * @lc app=leetcode.cn id=18 lang=cpp
 *
 * [18] 四数之和
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> fourSum(vector<int> &nums, int target)
    {
        if (nums.size() < 4)
            return {};
        vector<vector<int>> result;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 3; i++)
        {
            if (nums[i] > 0 && nums[i] >= target)
                return result;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            for (int j = i + 1; j < nums.size() - 2; j++)
            {
                if (j > i + 1 && nums[j - 1] == nums[j])
                    continue;
                int left = j + 1;
                int right = nums.size() - 1;
                while (left < right)
                {
                    long tmp = (long)nums[i] + nums[j] + nums[left] + nums[right];
                    if (tmp < target)
                        left++;
                    else if (tmp > target)
                        right--;
                    else
                    {
                        vector<int> vec = {
                            nums[i],
                            nums[j],
                            nums[left],
                            nums[right]};
                        result.push_back(vec);
                        while (left < right && nums[left] == nums[left + 1])
                            left++;
                        while (left < right && nums[right] == nums[right - 1])
                            right--;
                        left++;
                        right--;
                    }
                }
            }
        }
        return result;
    }
};
// @lc code=end
