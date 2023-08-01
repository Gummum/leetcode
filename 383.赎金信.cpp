/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-01 19:54
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-01 20:17
 * @FilePath: \leetcode\383.赎金信.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=383 lang=cpp
 *
 * [383] 赎金信
 */

// @lc code=start
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>map;
        for(auto &i:magazine)
            map[i]++;
        for(auto &i:ransomNote)
        {
            auto it=map.find(i);
            if(it==map.end()||it->second<=0)
                return false;
            it->second--;
        }
        return true;
    }
};
// @lc code=end

