/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-05 09:39
 * @LastEditTime: 2023-08-05 09:40
 * @FilePath: \leetcode\501.二叉搜索树中的众数.cpp
 * @Description: not pass
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
    int maxCount;
    int curCount;
    TreeNode* pre;
    vector<int> findMode(TreeNode* root) {
        if(root==nullptr)return result;
        pre=nullptr;
        maxCount=0;
        curCount=0;
        result.clear();
        search(root);
        return result;
    }
    void search(TreeNode* root)
    {
        if(root==nullptr)return;
        search(root->left);
        if(pre==nullptr)    
            curCount=1;
        else if(pre->val==root->val)
            curCount++;       
        else
            curCount=1;
        pre=root;
        if(curCount==maxCount)
            result.push_back(root->val);
        if(curCount>maxCount)
        {
            maxCount=curCount;
            result.clear();
            result.push_back(root->val);
        }


        search(root->right);
    }
};
// @lc code=end

