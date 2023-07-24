/***
 * @Author: gongbinwen
 * @Date: 2023-07-24 13:35
 * @LastEditTime: 2023-07-24 13:35
 * @FilePath: \leetcode\剑指 Offer 33. 二叉搜索树的后序遍历序列.cpp
 * @Description:pass
 * @
 */

/*
输入一个整数数组，判断该数组是不是某二叉搜索树的后序遍历结果。如果是则返回 true，否则返回 false。假设输入的数组的任意两个数字都互不相同。

参考以下这颗二叉搜索树：

     5
    / \
   2   6
  / \
 1   3
示例 1：

输入: [1,6,3,2,5]
输出: false
示例 2：

输入: [1,3,2,6,5]
输出: true
 
提示：

数组长度 <= 1000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/er-cha-sou-suo-shu-de-hou-xu-bian-li-xu-lie-lcof
*/
class Solution
{
public:
    bool verifyPostorder(vector<int> &postorder)
    {
        if (postorder.size() < 2)
            return true;
        return recurve(postorder, 0, postorder.size() - 1);
    }
    bool recurve(vector<int> &postorder, int left, int right)
    {
        if (left >= right)
            return true;
        int index = left;
        for (int i = right - 1; i >= left; i--)
        {
            if (postorder[i] < postorder[right])
            {
                index = i;
                break;
            }
        }
        for (int i = left; i < index; i++)
        {
            if (postorder[i] > postorder[right])
                return false;
        }
        for (int i = index + 1; i < right; i++)
        {
            if (postorder[i] < postorder[right])
                return false;
        }
        return recurve(postorder, left, index) && recurve(postorder, index + 1, right - 1);
    }
};
/*

输入
[4, 8, 6, 12, 16, 14, 10]
输出
false
预期结果
true

*/