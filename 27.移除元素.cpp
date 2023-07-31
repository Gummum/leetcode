/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-31 09:01
 * @LastEditTime: 2023-07-31 09:24
 * @FilePath: \leetcode\27.移除元素.cpp
 * @Description: pass，自己的解法，for里面判断的太多了，有点臃肿
 * @另外两种是基于双指针，一个是快慢指针，一个是相向指针。
 * @
 */

/*
 * @lc app=leetcode.cn id=27 lang=cpp
 *
 * [27] 移除元素
 */

// @lc code=start
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int size=nums.size();
        if(size==0)return 0;
        int endIndex=size-1;
        for(int i=0;i<=endIndex;i++)
        {
            while (endIndex>=0&&nums[endIndex]==val)
            {
                endIndex--;
            }
            if(endIndex<0)
                break;  
            if(i<endIndex&&nums[i]==val)
            {
                swap(nums[i],nums[endIndex]);
                endIndex--;
            }
        }
        return endIndex+1;
    }
};
// @lc code=end

