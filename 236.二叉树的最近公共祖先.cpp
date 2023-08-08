/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-08 14:01
 * @LastEditTime: 2023-08-08 14:13
 * @FilePath: \leetcode\236.二叉树的最近公共祖先.cpp
 * @Description: not pass
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
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==nullptr||root==q||root==p)return root;
        TreeNode* leftNode=lowestCommonAncestor(root->left,p,q);
        TreeNode* rightNode=lowestCommonAncestor(root->right,p,q);
        if(leftNode&&rightNode)return root;
        if(!leftNode)return rightNode;
        return leftNode;
    }
};
// @lc code=end

