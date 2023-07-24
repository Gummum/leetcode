/***
 * @Author: gongbinwen
 * @Date: 2023-07-24 14:31
 * @LastEditTime: 2023-07-24 14:43
 * @FilePath: \leetcode\113.路径总和-ii.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=113 lang=cpp
 *
 * [113] 路径总和 II
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
    void recurve(vector<int> vec, TreeNode *root, int targetSum)
    {
        if (root == nullptr)
        {
            return;
        }
        vec.push_back(root->val);
        targetSum -= root->val;
        if(root->left==nullptr&&root->right==nullptr&&targetSum==0)
        {
            result.push_back(vec);
            return;
        }
        recurve(vec, root->left, targetSum);
        recurve(vec, root->right, targetSum);
        return;
    }
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<int> vec;
        recurve(vec, root, targetSum);
        return result;
    }

private:
    vector<vector<int>> result;
};
// @lc code=end
