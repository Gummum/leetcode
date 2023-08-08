/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-08 15:20
 * @LastEditTime: 2023-08-08 15:38
 * @FilePath: \leetcode\538.把二叉搜索树转换为累加树.cpp
 * @Description: 
 * @
 */
 
/*
 * @lc app=leetcode.cn id=538 lang=cpp
 *
 * [538] 把二叉搜索树转换为累加树
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
    TreeNode* convertBST(TreeNode* root) {
        int sum=0;
        traversal(root,sum);
        return root;
    }
    void traversal(TreeNode* root,int & sum)
    {
        if(root==nullptr)return ;
        traversal(root->right,sum);
        root->val+=sum;
        sum=root->val;
        traversal(root->left,sum);
    }
};
// @lc code=end

