/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-05 07:48
 * @LastEditors: Please set LastEditors
 * @LastEditTime: 2023-08-05 08:48
 * @FilePath: \leetcode\98.验证二叉搜索树.cpp
 * @Description: not pass ，中序遍历，pre保存的是中序遍历后，vector[i-1]
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
    TreeNode *pre=nullptr;
    bool isValidBST(TreeNode* root) {
        if(root==nullptr)return true;
        bool left=isValidBST(root->left);

        if(pre!=nullptr&&pre->val>=root->val)return false;
        pre=root;

        bool right=isValidBST(root->right);

        return left&&right;
        
    }
};
// @lc code=end

