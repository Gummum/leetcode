/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-01 20:22
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-01 20:38
 * @FilePath: \leetcode\15.三数之和.cpp
 * @Description: pass,双指针
 * @
 */

/*
 * @lc app=leetcode.cn id=15 lang=cpp
 *
 * [15] 三数之和
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;i++)
        {
            if(nums[i]>0)
                return result;
            if(i>0 && nums[i-1]==nums[i])
                continue;
            int left = i + 1;
            int right = nums.size() - 1;
            while(left<right)
            {
                int tmp = nums[i] + nums[left] + nums[right];
                if (tmp < 0)
                    left++;
                else if (tmp > 0)
                    right--;
                else
                {
                    result.push_back(vector<int>{nums[i], nums[left], nums[right]});
                    while(left<right&&nums[left]==nums[left+1])left++;
                    while(left<right&&nums[right]==nums[right-1])right--;
                    right--;
                    left++;
                }
                   
            }
        }
        return result;
    }
};
// @lc code=end

