/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-25 15:30
 * @LastEditTime: 2023-07-25 16:18
 * @FilePath: \leetcode\233.数字-1-的个数.cpp
 * @Description: 超时了，答案的解法不具有普遍性，算是找规律的一种
 * @
 */

/*
 * @lc app=leetcode.cn id=233 lang=cpp
 *
 * [233] 数字 1 的个数
 */

// @lc code=start
class Solution
{
public:
    int countDigitOne(int n) {
    int ones = 0;
    for (long long m = 1; m <= n; m *= 10)
        ones += (n/m + 8) / 10 * m + (n/m % 10 == 1) * (n%m + 1);
    return ones;
}

};
// @lc code=end
/*
    超时了
    class Solution {
public:
    int countDigitOne(int n) {
        int count=0;
        for(int i=1;i<=n;i++)
        {
            string str=to_string(i);
            for(int j=0;j<str.size();j++)
            {
                if(str[j]=='1')
                    count++;
            }
        }
        return count;
    }
};
*/
