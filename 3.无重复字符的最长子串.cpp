/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-14 09:36
 * @LastEditTime: 2023-07-26 11:43
 * @FilePath: \leetcode\3.无重复字符的最长子串.cpp
 * @Description:pass 
 * @
 */

/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)return 0;
        int left=0;
        int right=0;
        int max=0;
        for(int i=1;i<s.size();i++)
        {
            for(int j=left;j<=right;j++)
            {
                if(s[j]==s[i])
                {
                    if(max<right-left+1)
                        max=right-left+1;
                    left=j+1;
                    break;
                }
            }
            right=i;
        }
        if(max<right-left+1)
            max=right-left+1;
        return max;
    }
};
// @lc code=end

