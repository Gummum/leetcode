/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-05 08:54
 * @LastEditTime: 2023-08-05 09:38
 * @FilePath: \leetcode\530.二叉搜索树的最小绝对差.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=530 lang=cpp
 *
 * [530] 二叉搜索树的最小绝对差
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
    TreeNode *pre = nullptr;
    int result=INT_MAX;
    int getMinimumDifference(TreeNode *root)
    {
        if (!root)
            return INT_MAX;
        getMinimumDifference(root->left);

        if (pre != nullptr)
        {
            result = min(result,root->val - pre->val);
        }
        pre = root;

        getMinimumDifference(root->right);

        return result;
    }
};
// @lc code=end
