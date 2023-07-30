/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-07-30 19:53
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-07-30 20:30
 * @FilePath: \leetcode\剑指 Offer 66. 构建乘积数组.cpp
 * @Description: not pass 通过上三角，下三角遍历，绕开a[i]
 * @
 */
/*
给定一个数组 A[0,1,…,n-1]，请构建一个数组 B[0,1,…,n-1]，其中 B[i] 的值是数组 A 中除了下标 i 以外的元素的积, 即 B[i]=A[0]×A[1]×…×A[i-1]×A[i+1]×…×A[n-1]。不能使用除法。

示例:
输入: [1,2,3,4,5]
输出: [120,60,40,30,24]
 
提示：

所有元素乘积之和不会溢出 32 位整数
a.length <= 100000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/gou-jian-cheng-ji-shu-zu-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution
{
public:
    vector<int> constructArr(vector<int> &a)
    {
        int len = a.size();
        if (len == 0)
            return {};
        vector<int> b(len, 1);
        int tmp = 1;
        for (int i = 1; i < len; i++)
        {
            b[i] = b[i - 1] * a[i - 1];
        }
        for (int i = len - 2; i >= 0; i--)
        {
            tmp *= a[i + 1];
            b[i] *= tmp;
        }
        return b;
    }
};
