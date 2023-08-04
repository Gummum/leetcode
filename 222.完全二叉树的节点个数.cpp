/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-04 13:40
 * @LastEditTime: 2023-08-04 13:52
 * @FilePath: \leetcode\222.完全二叉树的节点个数.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=222 lang=cpp
 *
 * [222] 完全二叉树的节点个数
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
    int countNodes(TreeNode* root) {
        if(root==nullptr)return 0;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};
// @lc code=end

