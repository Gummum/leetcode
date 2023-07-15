/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-15 09:40
 * @LastEditTime: 2023-07-15 10:04
 * @FilePath: \leetcode\剑指 Offer 04. 二维数组中的查找.cpp
 * @Description: Pass
 * 
 */
/*
在一个 n * m 的二维数组中，每一行都按照从左到右 非递减 的顺序排序，
每一列都按照从上到下 非递减 的顺序排序。
请完成一个高效的函数，输入这样的一个二维数组和一个整数，判断数组中是否含有该整数。

示例:

现有矩阵 matrix 如下：
[
  [1,   4,  7, 11, 15],
  [2,   5,  8, 12, 19],
  [3,   6,  9, 16, 22],
  [10, 13, 14, 17, 24],
  [18, 21, 23, 26, 30]
]
给定 target = 5，返回 true。

给定 target = 20，返回 false。

限制：

0 <= n <= 1000

0 <= m <= 1000

链接：https://leetcode.cn/problems/er-wei-shu-zu-zhong-de-cha-zhao-lcof
*/

class Solution {
public:
    bool findNumberIn2DArray(vector<vector<int>>& matrix, int target) {
        if(matrix.empty())return false;
        int i=0,j=matrix[0].size()-1,iMax=matrix.size();
        while(i<iMax&&j>=0)
        {
          if(matrix[i][j]>target)
          {
            j--;
          }
          else if(matrix[i][j]<target)
          {
            i++;
          }
          else
          {
            return true;
          }
        }
        return false;
    }
};

/*
  从右上角判断
    大于当前数的往左移，小于往下移
  边界条件
    j>=0&&i<Max行&&不为空
*/