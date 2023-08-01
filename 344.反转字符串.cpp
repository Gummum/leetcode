/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-02 00:14
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-02 00:14
 * @FilePath: \leetcode\344.反转字符串.cpp
 * @Description: pass 双指针直接秒
 * @
 */

/*
 * @lc app=leetcode.cn id=344 lang=cpp
 *
 * [344] 反转字符串
 */

// @lc code=start
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left=0;
        int right=s.size()-1;
        while(left<right)
        {
            char tmp=s[left];
            s[left]=s[right];
            s[right]=tmp;
            left++;
            right--;
        }
    }
};
// @lc code=end

