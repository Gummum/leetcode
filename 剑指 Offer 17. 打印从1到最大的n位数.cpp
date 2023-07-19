/***
 * @Author: gongbinwen
 * @Date: 2023-07-19 09:18
 * @LastEditTime: 2023-07-19 09:24
 * @FilePath: \leetcode\剑指 Offer 17. 打印从1到最大的n位数.cpp
 * @Description:pass
 * @
 */

/*
输入数字 n，按顺序打印出从 1 到最大的 n 位十进制数。比如输入 3，则打印出 1、2、3 一直到最大的 3 位数 999。

示例 1:

输入: n = 1
输出: [1,2,3,4,5,6,7,8,9]

说明：

用返回一个整数列表来代替打印
n 为正整数

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/da-yin-cong-1dao-zui-da-de-nwei-shu-lcof

*/

class Solution
{
public:
    vector<int> printNumbers(int n)
    {
        vector<int> result;
        long long num = pow(10, n);
        result.resize(num - 1, 0);
        for (long long i = 0; i < num - 1; i++)
        {
            result[i] = i + 1;
        }
        return result;
    }
};