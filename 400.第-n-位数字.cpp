/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-25 16:22
 * @LastEditTime: 2023-07-25 16:57
 * @FilePath: \leetcode\400.第-n-位数字.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=400 lang=cpp
 *
 * [400] 第 N 位数字
 */

// @lc code=start
class Solution {
public:
    int findNthDigit(int n) {
        if(n<9)return n;
        long long sumDigit=0;
        int digit=1;
        while (1)
        {
            long long sumDigitTmp=9*digit*pow(10,digit-1);
            if(sumDigitTmp>=n)
            {
                break;
            }
            else
            {
                n-=sumDigitTmp;
            }
            digit++;
        }
        int num=pow(10,digit-1)+(n-1)/digit;
        int index=(n-1)%digit;
        string str=to_string(num);
        return str[index]-'0';
    }
};
// @lc code=end

