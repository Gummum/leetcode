/***
 * @Author: gongbinwen
 * @Date: 2023-08-04 13:43
 * @LastEditTime: 2023-08-04 14:13
 * @FilePath: \leetcode\257.二叉树的所有路径.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=257 lang=cpp
 *
 * [257] 二叉树的所有路径
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
    vector<string> binaryTreePaths(TreeNode *root)
    {
        vector<string> result;
        string str;
        if (root == nullptr)
            return result;
        dfs(root, str, result);
        return result;
    }
    void dfs(TreeNode *root, string str, vector<string> &result)
    {
        str += to_string(root->val);
        if (root->left == nullptr && root->right == nullptr)
        {
            result.push_back(str);
            return;
        }
        if (root->left )
            dfs(root->left, str + "->", result);
        if (root->right )
            dfs(root->right, str + "->", result);
    }
};
// @lc code=end
