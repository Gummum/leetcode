/***
 * @Author: gongbinwen
 * @Date: 2023-07-22 16:00
 * @LastEditTime: 2023-07-22 16:01
 * @FilePath: \leetcode\101.对称二叉树.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    bool isSymmetric(TreeNode *root)
    {
        if (root == nullptr)
            return true;
        queue<TreeNode *> queue;
        queue.push(root->left);
        queue.push(root->right);
        while (!queue.empty())
        {
            TreeNode *left = queue.front();
            queue.pop();
            TreeNode *right = queue.front();
            queue.pop();
            if (!left && !right)
                continue;
            if (!left || !right || left->val != right->val)
                return false;
            queue.push(left->left);
            queue.push(right->right);
            queue.push(left->right);
            queue.push(right->left);
        }
        return true;
    }
};
// @lc code=end

/*
    递归:
    class Solution
    {
    public:
        bool isSymmetric(TreeNode *root)
        {
            if (root == nullptr)
                return true;
            return recurve(root->left,root->right);
        }
        bool recurve(TreeNode *root1,TreeNode *root2)
        {
            if(!root1&&!root2)return true;
            if(root1==nullptr||root2==nullptr)return false;
            if(root1->val==root2->val)
            {
                return recurve(root1->left,root2->right)&&recurve(root1->right,root2->left);
            }
            return false;
        }
    };
    迭代:

*/