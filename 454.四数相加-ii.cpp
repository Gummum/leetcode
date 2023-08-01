/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-01 19:35
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-01 19:46
 * @FilePath: \leetcode\454.四数相加-ii.cpp
 * @Description: pass map解决，记得value存的是值出现的次数
 * @
 */

/*
 * @lc app=leetcode.cn id=454 lang=cpp
 *
 * [454] 四数相加 II
 */

// @lc code=start
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>map;
        int result=0;
        for(int i=0;i<nums1.size();i++)
        {
            for(int j=0;j<nums2.size();j++)
            {
                map[nums1[i]+nums2[j]]++;
            }
        }
        for(int i=0;i<nums3.size();i++)
        {
            for(int j=0;j<nums4.size();j++)
            {
                auto it=map.find(-(nums3[i] + nums4[j]));
                if(it!=map.end())
                    result+=it->second;
            }
        }
        return result;
    }
};
// @lc code=end

