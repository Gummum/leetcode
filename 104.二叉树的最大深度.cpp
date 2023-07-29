/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-29 11:32
 * @LastEditTime: 2023-07-29 11:40
 * @FilePath: \leetcode\104.二叉树的最大深度.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=104 lang=cpp
 *
 * [104] 二叉树的最大深度
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
    int maxDepth(TreeNode *root)
    {
        if (!root)
            return 0;
        int rightDeep = maxDepth(root->right);
        int leftDeep = maxDepth(root->left);
        return rightDeep > leftDeep ? rightDeep + 1 : leftDeep + 1;
    }
};
// @lc code=end
