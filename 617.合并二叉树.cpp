/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-04 22:09
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-04 22:20
 * @FilePath: \leetcode\617.合并二叉树.cpp
 * @Description: not pass
 * @
 */

/*
 * @lc app=leetcode.cn id=617 lang=cpp
 *
 * [617] 合并二叉树
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
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(!root1)return root2;
        if(!root2)return root1;
        root2->val+=root1->val;
        root2->left = mergeTrees(root1->left, root2->left);
        root2->right = mergeTrees(root1->right, root2->right);
        return root2;
    }   
};
// @lc code=end

