/***
 * @Author: gongbinwen
 * @Date: 2023-08-04 09:42
 * @LastEditTime: 2023-08-04 09:42
 * @FilePath: \leetcode\515.在每个树行中找最大值.cpp
 * @Description:
 * @
 */

/*
 * @lc app=leetcode.cn id=515 lang=cpp
 *
 * [515] 在每个树行中找最大值
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
    vector<int> largestValues(TreeNode *root)
    {
        vector<int> result;
        queue<TreeNode *> que;
        if (!root)
            return result;
        que.push(root);
        while (!que.empty())
        {
            int size = que.size();
            int max=que.front()->val;
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = que.front();
                que.pop();
                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);
                if(max<node->val)
                    max=node->val;
            }
            result.push_back(max);
        }
        return result;
    }
};
// @lc code=end
