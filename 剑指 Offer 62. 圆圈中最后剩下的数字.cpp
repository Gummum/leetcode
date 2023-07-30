/***
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-07-30 16:19
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-07-30 16:20
 * @FilePath: \leetcode\剑指 Offer 62. 圆圈中最后剩下的数字.cpp
 * @Description: not pass 约瑟夫问题，可以用动态规划的思想（k神）
 * @
 */
/*
0,1,···,n-1这n个数字排成一个圆圈，从数字0开始，每次从这个圆圈里删除第m个数字（删除后从下一个数字开始计数）。求出这个圆圈里剩下的最后一个数字。

例如，0、1、2、3、4这5个数字组成一个圆圈，从数字0开始每次删除第3个数字，则删除的前4个数字依次是2、0、4、1，因此最后剩下的数字是3。

示例 1：
输入: n = 5, m = 3
输出: 3

示例 2：
输入: n = 10, m = 17
输出: 2
 
限制：

1 <= n <= 10^5
1 <= m <= 10^6

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/yuan-quan-zhong-zui-hou-sheng-xia-de-shu-zi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution
{
public:
    int lastRemaining(int n, int m)
    {
        int x = 0;
        for (int i = 2; i <= n; i++)
        {
            x = (x + m) % i;
        }
        return x;
    }
};
/*
自己的解法：基于环形链表的
class Solution {
public:
    int lastRemaining(int n, int m) {
        vector<int>vec(n);
        for(int i=0;i<n;i++)
            vec[i]=i;
        int index=0;
        while(vec.size()>1)
        {
            int truthIndex=(index+m-1)%vec.size();
            vec.erase(vec.begin()+truthIndex);
            index=truthIndex;
        }
        return vec[0];
    }
};
*/
