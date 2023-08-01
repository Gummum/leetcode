/***
 * @Author: gongbinwen
 * @Date: 2023-07-15 10:12
 * @LastEditTime: 2023-08-02 00:46
 * @FilePath: \leetcode\剑指 Offer 05. 替换空格.cpp
 * @Description: not pass,下面是别人的答案，
 * @
 */

/*
请实现一个函数，把字符串 s 中的每个空格替换成"%20"。

示例 1：

输入：s = "We are happy."
输出："We%20are%20happy."
 
限制：

0 <= s 的长度 <= 10000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/ti-huan-kong-ge-lcof
*/
class Solution
{
public:
    string replaceSpace(string s)
    { // 字符数组
        if (s.size() == 0)
            return s;
        int spaceNum = 0;
        for (auto &c : s)
            if (c == ' ')
                spaceNum++;
        int oldStrIndex = s.size() - 1;
        s.resize(s.size() + 2 * spaceNum, 0);
        int newStrIndex = s.size() - 1;
        while (oldStrIndex >= 0 && newStrIndex >= 0)
        {
            if (s[oldStrIndex] == ' ')
            {
                s[newStrIndex--] = '0';
                s[newStrIndex--] = '2';
                s[newStrIndex] = '%';
            }
            else
                s[newStrIndex] = s[oldStrIndex];
            newStrIndex--;
            oldStrIndex--;
        }
        return s;
    }
};
/*
    之前自己的解法，空间效率是O(1),用的是原来的数组
    class Solution {
public:
    string replaceSpace(string s) {
        if(s.length()==0)return s;
        int count=0;
        int slow=s.length()-1;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                count++;
            }
        }
        s.resize(s.length()+count*2);
        int fast=s.length()-1;
        while(slow>=0)
        {
            if(s[slow]!=' ')
            {
                s[fast]=s[slow];
                fast--;
                slow--;
            }
            else
            {
                s[fast--]='0';
                s[fast--]='2';
                s[fast--]='%';
                slow--;
            }
        }
    //别人的解法，用新string,代码简洁
    string array;   //存储结果

        for(auto &c : s){   //遍历原字符串
            if(c == ' '){
                array.push_back('%');
                array.push_back('2');
                array.push_back('0');
            }
            else{
                array.push_back(c);
            }
        }
        return array;
*/
/*
    step1:
        检测有多少个空格
    step2:
        创建一个新的string,size=s+2*spaceCount
    step3:
        将s的复制过来，遇到空格用%20替换，多便宜两个字符
*/