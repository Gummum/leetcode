/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-05 09:39
 * @LastEditTime: 2023-08-05 09:40
 * @FilePath: \leetcode\501.二叉搜索树中的众数.cpp
 * @Description: 
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
class Solution {
public:
    vector<int> result;
    vector<int> findMode(TreeNode* root) {
        if(root==nullptr)return result;
        search(root,0);
        return result;
    }
    void search(TreeNode* root,int size)
    {
        if(root==nullptr)return;
        if(result.size()>0&&root->val==result.back())
        {
            result.clear();
            result.push
        }
    }
};
// @lc code=end

