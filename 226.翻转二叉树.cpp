/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-22 15:36
 * @LastEditTime: 2023-07-22 15:58
 * @FilePath: \leetcode\226.翻转二叉树.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=226 lang=cpp
 *
 * [226] 翻转二叉树
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
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == nullptr)
            return root;

        TreeNode *left  = invertTree(root->right);
        TreeNode *right = invertTree(root->left);
        root->left  = left;
        root->right = right;
        return root;
    }
};
// @lc code=end
