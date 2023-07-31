/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-31 12:21
 * @LastEditTime: 2023-07-31 12:38
 * @FilePath: \leetcode\59.螺旋矩阵-ii.cpp
 * @Description: pass 左闭右开好解法
 * @
 */

/*
 * @lc app=leetcode.cn id=59 lang=cpp
 *
 * [59] 螺旋矩阵 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> vec(n,vector<int>(n,0));
        int num=1;
        for(int k=0;k<n/2;k++)
        {
            int j=k,i=k;
            while(j<vec[0].size()-1-k)
            {
                vec[i][j++]=num++;
            }
            while (i<vec.size()-1-k)
            {
                vec[i++][j]=num++;
            }
            while(j>k)
            {
                vec[i][j--]=num++;
            }
            while(i>k)
            {
                vec[i--][j]=num++;
            }
        }
        if(n%2==1)
            vec[n/2][n/2]=n*n;
        return vec;
    }
};
// @lc code=end

