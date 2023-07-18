/***
 * @Author: gongbinwen
 * @Date: 2023-07-18 9:22
 * @LastEditTime: 2023-07-18 9:22
 * @FilePath: \leetcode\剑指 Offer 13. 机器人的运动范围.cpp
 * @Description:not pass ,不过原理大概懂了，这题有特殊性
 * @
 */

/*

地上有一个m行n列的方格，从坐标 [0,0] 到坐标 [m-1,n-1] 。一个机器人从坐标 [0, 0] 的格子开始移动，
它每次可以向左、右、上、下移动一格（不能移动到方格外），
也不能进入行坐标和列坐标的数位之和大于k的格子。
例如，当k为18时，机器人能够进入方格 [35, 37] ，因为3+5+3+7=18。
但它不能进入方格 [35, 38]，因为3+5+3+8=19。请问该机器人能够到达多少个格子？

示例 1：

输入：m = 2, n = 3, k = 1
输出：3
示例 2：

输入：m = 3, n = 1, k = 0
输出：1
提示：

1 <= n,m <= 100
0 <= k <= 20

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/ji-qi-ren-de-yun-dong-fan-wei-lcof

*/
class Solution
{
public:
    int movingCount(int m, int n, int k)
    {
        if (!k)
            return 1;
        vector<vector<int>> flag(m, vector<int>(n, 0));
        int num = 1;
        flag[0][0] = 1;
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i == 0 && j == 0) || (i % 10 + i / 10 + j % 10 + j / 10) > k)
                    continue;
                if (i - 1 >= 0)
                    flag[i][j] |= flag[i - 1][j];
                if (j - 1 >= 0)
                    flag[i][j] |= flag[i][j - 1];
                num += flag[i][j];
            }
        }
        return num;
    }
};
/*
    // step:
    //     建立循环开始遍历m,n
    //     判断每一个元素的i,j是否满足条件
    //         i%10+i/10+j%10+j/10<k
    //     满足num++,不满足跳过
    只向右或者向下判断，那么新的i,j如果符合数位条件同时是可以到达的位置，即num++;

*/