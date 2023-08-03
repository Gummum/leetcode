/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-03 09:03
 * @LastEditTime: 2023-08-03 09:03
 * @FilePath: \leetcode\459.重复的子字符串.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=459 lang=cpp
 *
 * [459] 重复的子字符串
 */

// @lc code=start
class Solution {
public:
    bool repeatedSubstringPattern(string s) {   
        string tmp=s+s;
        tmp.erase(tmp.begin());
        tmp.erase(tmp.end()-1);
        if(tmp.find(s)!=string::npos)
            return true;
        return false;
    }
};
// @lc code=end

