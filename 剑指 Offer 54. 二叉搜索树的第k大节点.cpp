/***
 * @Author: gongbinwen
 * @Date: 2023-07-29 11:31
 * @LastEditTime: 2023-07-29 11:31
 * @FilePath: \leetcode\剑指 Offer 54. 二叉搜索树的第k大节点.cpp
 * @Description: pass
 * @
 */

/*
给定一棵二叉搜索树，请找出其中第 k 大的节点的值。

示例 1:
输入: root = [3,1,4,null,2], k = 1
   3
  / \
 1   4
  \
   2
输出: 4

示例 2:
输入: root = [5,3,6,2,4,null,null,1], k = 3
       5
      / \
     3   6
    / \
   2   4
  /
 1
输出: 4
 

限制：

1 ≤ k ≤ 二叉搜索树元素个数

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/er-cha-sou-suo-shu-de-di-kda-jie-dian-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution
{
public:
    int kthLargest(TreeNode *root, int k)
    {
        int result = 0;
        dfs(root, k, result);
        return result;
    }
    void dfs(TreeNode *root, int &k, int &result)
    {
        if (!root)
            return;
        dfs(root->right, k, result);
        if (--k == 0)
            result = root->val;
        dfs(root->left, k, result);
    }
};
