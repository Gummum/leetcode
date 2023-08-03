/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-03 14:03
 * @LastEditTime: 2023-08-03 14:07
 * @FilePath: \leetcode\1047.删除字符串中的所有相邻重复项.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=1047 lang=cpp
 *
 * [1047] 删除字符串中的所有相邻重复项
 */

// @lc code=start
class Solution {
public:
    string removeDuplicates(string s) {
        stack<char>stc;
        for(auto& c:s)
        {
            if(!stc.empty()&&c==stc.top())
                stc.pop();
            else
                stc.push(c);
        }
        string result;
        while(!stc.empty())
        {
            result+=stc.top();
            stc.pop();
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
// @lc code=end

