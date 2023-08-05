/***
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-05 07:41
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-05 07:45
 * @FilePath: \leetcode\700.二叉搜索树中的搜索.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=700 lang=cpp
 *
 * [700] 二叉搜索树中的搜索
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
    TreeNode *searchBST(TreeNode *root, int val)
    {
        if (!root || root->val == val)
            return root;
        if (root->val < val)
            return searchBST(root->right, val);
        else
            return searchBST(root->left,val);
    }
};
// @lc code=end
