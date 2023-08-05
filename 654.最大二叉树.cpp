/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-04 21:08
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-04 21:41
 * @FilePath: \leetcode\654.最大二叉树.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=654 lang=cpp
 *
 * [654] 最大二叉树
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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        if(nums.size()==0)return nullptr;
        int max=nums[0];
        int index=0;
        for(int i=1;i<nums.size();i++)
        {
            if (nums[i] > max)
            {
                max = nums[i];
                index = i;
            }
        }   
        TreeNode*node=new TreeNode(max);
        if(index>0)
        {
            vector<int> newVec(nums.begin(), nums.begin() + index);
            node->left = constructMaximumBinaryTree(newVec);
        }
        if (index < nums.size())
        {
            vector<int> newVec(nums.begin() + index+1, nums.end());
            node->right = constructMaximumBinaryTree(newVec);
        }

        return node;   
    }
};
// @lc code=end

