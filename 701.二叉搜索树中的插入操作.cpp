/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-08 14:20
 * @LastEditTime: 2023-08-08 14:20
 * @FilePath: \leetcode\701.二叉搜索树中的插入操作.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=701 lang=cpp
 *
 * [701] 二叉搜索树中的插入操作
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==nullptr)
        {
            TreeNode* node=new TreeNode(val);
            return node;
        }
        if(root->val>val)
        {
            if(root->left)
            {
                insertIntoBST(root->left,val);
            }
            else
            {
                TreeNode* node=new TreeNode(val);
                root->left=node;
                return root;
            }
        }
        else
        {
            if(root->right)
            {
                insertIntoBST(root->right,val);
            }
            else
            {
                TreeNode* node=new TreeNode(val);
                root->right=node;
                return root;
            }
        }
        return root;
    }
};
// @lc code=end

