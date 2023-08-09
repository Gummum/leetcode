/***
 * @Author: gongbinwen
 * @Date: 2023-08-05 09:39
 * @LastEditTime: 2023-08-05 09:40
 * @FilePath: \leetcode\501.二叉搜索树中的众数.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=501 lang=cpp
 *
 * [501] 二叉搜索树中的众数
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
    vector<int> result;
    int count;
    int maxCount;
    TreeNode *pre;
    vector<int> findMode(TreeNode *root)
    {
        result.clear();
        count = 0;
        maxCount = 0;
        pre = nullptr;
        traversal(root);
        return result;
    }
    void traversal(TreeNode *root)
    {
        if (root == nullptr)
            return;
        traversal(root->left);

        if (pre && pre->val == root->val)
            count++;
        else
            count = 1;

        if (count > maxCount)
        {
            maxCount = count;
            result.clear();
            result.push_back(root->val);
        }
        else if (count == maxCount)
            result.push_back(root->val);
        pre = root;

        traversal(root->right);
    }
};
// @lc code=end
