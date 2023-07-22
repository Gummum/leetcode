/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-22 16:43
 * @LastEditTime: 2023-07-22 17:48
 * @FilePath: \leetcode\54.螺旋矩阵.cpp
 * @Description: 
 * @
 */

/*
 * @lc app=leetcode.cn id=54 lang=cpp
 *
 * [54] 螺旋矩阵
 */

// @lc code=start
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> result;
        int n=min(matrix[0].size(),matrix.size());
        int i=0;
        int j=0;
        for(int k=0;k<(n+1)/2;k++)
        {
            i=k;
            j=k;
            result.push_back(matrix[i][j]);
            for(j=k+1;j<matrix[0].size()-k-1;j++)
            {
                result.push_back(matrix[i][j]);
            }
            for(;i<matrix.size()-k-1;i++)
            {           
                result.push_back(matrix[i][j]);
            }
            for(;j>0+k;j--)
            {
                result.push_back(matrix[i][j]);
            }
            for(;i>0+k;i--)
            {           
                result.push_back(matrix[i][j]);
            }
        }
        return result;
    }
};
// @lc code=end

