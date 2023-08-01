/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-01 16:21
 * @LastEditTime: 2023-08-01 16:29
 * @FilePath: \leetcode\349.两个数组的交集.cpp
 * @Description: 
 * @
 */

/*
 * @lc app=leetcode.cn id=349 lang=cpp
 *
 * [349] 两个数组的交集
 */

// @lc code=start
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> nums1Set;
        vector<int> result;
        for(int i=0;i<nums1.size();i++)
        {
            nums1Set.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(nums1Set.find(nums2[i])!=nums1Set.end())
            {
                result.push_back(nums2[i]);
                nums1Set.erase(nums2[i]);
            }
        }
        return result;
    }
};
// @lc code=end

