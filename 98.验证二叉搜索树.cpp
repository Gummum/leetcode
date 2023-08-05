/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-05 07:48
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-05 07:53
 * @FilePath: \leetcode\98.验证二叉搜索树.cpp
 * @Description: 
 * @
 */

/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
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
    bool isValidBST(TreeNode* root) {
        if(!root) return true;
        bool flag=true;
        if (root->left)
        {
            if (root->left->val < root->val)
                flag&=isValidBST(root->left);
            else
                return false;
        }
        if (root->right)
        {
            if (root->right->val > root->val)
                flag &= isValidBST(root->right);
            else
                return false;
        }
        return flag;
    }
};
// @lc code=end

