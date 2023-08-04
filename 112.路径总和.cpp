/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-04 16:57
 * @LastEditTime: 2023-08-04 17:10
 * @FilePath: \leetcode\112.路径总和.cpp
 * @Description: not pass 随想录的解法太妙了
 * @
 */

/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root)return false;
        if(!root->left&&!root->right&&targetSum==root->val)
        {
            return true;
        }
        return hasPathSum(root->left,targetSum-root->val)||hasPathSum(root->right,targetSum-root->val);
    }
};
// @lc code=end

