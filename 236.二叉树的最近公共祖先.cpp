/***
 * @Author: gongbinwen
 * @Date: 2023-08-08 14:01
 * @LastEditTime: 2023-08-08 14:13
 * @FilePath: \leetcode\236.二叉树的最近公共祖先.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=236 lang=cpp
 *
 * [236] 二叉树的最近公共祖先
 */

// @lc code=start
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
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if(!root||root==p||root==q)return root;
        TreeNode *left=lowestCommonAncestor(root->left,p,q);
        TreeNode *right=lowestCommonAncestor(root->right,p,q);
        if(left&&right)return root;
        if(!left)return right;
        return left;
    }
};
// @lc code=end
