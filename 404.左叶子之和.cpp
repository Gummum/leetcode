/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-04 15:19
 * @LastEditTime: 2023-08-04 16:53
 * @FilePath: \leetcode\404.左叶子之和.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=404 lang=cpp
 *
 * [404] 左叶子之和
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
    int sumOfLeftLeaves(TreeNode* root) {
        int sum=0;
        dfs(root,sum);
        return sum;
    }
    void dfs(TreeNode* root,int &sum)
    {
        if(root==nullptr)return;
        if(root->left&&!root->left->left&&!root->left->right)
            sum+=root->left->val;
        dfs(root->left,sum);
        dfs(root->right,sum);
    }
};
// @lc code=end

