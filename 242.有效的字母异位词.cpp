/***
 * @Author: gongbinwen
 * @Date: 2023-08-01 16:12
 * @LastEditTime: 2023-08-01 16:13
 * @FilePath: \leetcode\242.有效的字母异位词.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=242 lang=cpp
 *
 * [242] 有效的字母异位词
 */

// @lc code=start
class Solution
{
public:
    bool isAnagram(string s, string t)
    {
        if (s.size() != t.size())
            return false;
        vector<int> hash(26, 0);
        for (int i = 0; i < s.size(); i++)
        {
            hash[s[i] - 'a']++;
            hash[t[i] - 'a']--;
        }
        for (int i = 0; i < hash.size(); i++)
        {
            if (hash[i] != 0)
                return false;
        }
        return true;
    }
};
// @lc code=end
