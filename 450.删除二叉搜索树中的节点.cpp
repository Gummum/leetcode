/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-08 14:30
 * @LastEditTime: 2023-08-08 14:44
 * @FilePath: \leetcode\450.删除二叉搜索树中的节点.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=450 lang=cpp
 *
 * [450] 删除二叉搜索树中的节点
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
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==nullptr)return root;
        if(root->val>key)
            root->left=deleteNode(root->left,key);
        else if(root->val<key)
            root->right=deleteNode(root->right,key);
        else
        {
            if(!root->left&&!root->right)
            {
                delete root;
                return nullptr;
            }
            else if(!root->right)
            {
                TreeNode *node=root->left;
                delete root;
                return node;
            }
            else if(!root->left)
            {
                TreeNode *node=root->right;
                delete root;
                return node;
            }
            else
            {
                TreeNode* cur=root->right;
                while(cur->left!=nullptr)
                    cur=cur->left;
                cur->left=root->left;
                TreeNode* node=root->right;
                delete root;
                return node;
            }
            
        }
        return root;


    }
};
// @lc code=end

