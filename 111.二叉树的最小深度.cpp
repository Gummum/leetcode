/***
 * @Author: gongbinwen
 * @Date: 2023-08-04 11:31
 * @LastEditTime: 2023-08-04 11:38
 * @FilePath: \leetcode\111.二叉树的最小深度.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    // 递归，屌爆了
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        int leftDepth = minDepth(root->left);
        int rightDepth = minDepth(root->right);
        return (!leftDepth || !rightDepth) ? leftDepth + rightDepth + 1 : min(leftDepth, rightDepth) + 1;
    }
};
// @lc code=end

/*
//迭代
class Solution
{
public:
    int minDepth(TreeNode *root)
    {
        queue<TreeNode *> que;
        if (!root)
            return 0;
        que.push(root);
        int depth=1;
        while (!que.empty())
        {
            int size = que.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = que.front();
                que.pop();
                if(!node->left&&!node->right)
                    return depth;
                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);
            }
            depth++;

        }
        return depth;
    }
};
*/