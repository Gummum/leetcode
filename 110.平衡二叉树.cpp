/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-29 12:31
 * @LastEditTime: 2023-07-29 12:31
 * @FilePath: \leetcode\110.平衡二叉树.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution
{
public:
    bool isBalanced(TreeNode *root)
    {
        if (!root)
            return true;
        int result = dfs(root);
        return result == -1 ? false : true;
    }
    int dfs(TreeNode *root)
    {
        if (!root)
            return 0;
        int left = dfs(root->left);
        int right = dfs(root->right);
        if (left == -1 || right == -1 || left > right + 1 || right > left + 1)
            return -1;
        return left > right ? left + 1 : right + 1;
    }
};
// @lc code=end
