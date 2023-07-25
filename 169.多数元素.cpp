/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-25 12:36
 * @LastEditTime: 2023-07-25 13:43
 * @FilePath: \leetcode\169.多数元素.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=169 lang=cpp
 *
 * [169] 多数元素
 */

// @lc code=start
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int cur=nums[0];
        int sum=1;
        for(int i=1;i<nums.size();i++)
        {
            if(sum==0)
            {
                cur=nums[i];
            }
            if(nums[i]==cur)
            {
                sum++;
            }
            else
            {
                sum--;
            }
        }

        return cur;
    }
};
// @lc code=end
/*
    排序：
    sort(nums.begin(),nums.end());
    return nums[nums.size()/2];
    摩尔投票：
    
*/
