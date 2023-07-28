/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-26 12:24
 * @LastEditTime: 2023-07-28 14:01
 * @FilePath: \leetcode\剑指 Offer 50. 第一个只出现一次的字符.cpp
 * @Description: pass
 * @
 */

/*
在字符串 s 中找出第一个只出现一次的字符。如果没有，返回一个单空格。 s 只包含小写字母。

示例 1:

输入：s = "abaccdeff"
输出：'b'
示例 2:

输入：s = "" 
输出：' '
 
限制：

0 <= s 的长度 <= 50000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/di-yi-ge-zhi-chu-xian-yi-ci-de-zi-fu-lcof

*/
class Solution {
public:
    char firstUniqChar(string s) {
        vector<int>set(26,-1);
        char result=' ';

        for(int i=0;i<s.size();i++)
        {
            int setIndex=s[i]-'a';
            if(set[setIndex]==-1)
            {
                set[setIndex]=i;
            }
            else
            {
                set[setIndex]=-2;
            }
            
        }
        int tmp=50000;
        for(int i=0;i<set.size();i++)
        {
            if(set[i]<tmp&&set[i]>-1)
                {
                    result='a'+i;
                    tmp=set[i];
                }
        }
        return result;
    }
};