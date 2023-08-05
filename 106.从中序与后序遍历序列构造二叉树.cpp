/***
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-04 19:28
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-04 19:45
 * @FilePath: \leetcode\106.从中序与后序遍历序列构造二叉树.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=106 lang=cpp
 *
 * [106] 从中序与后序遍历序列构造二叉树
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
    TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder)
    {
        if (inorder.size() == 0)
            return nullptr;
        return build(inorder, 0, inorder.size() - 1, postorder, 0, postorder.size() - 1);
    }

    TreeNode *build(vector<int> &inorder, int inleft, int inright, vector<int> &postorder, int poleft, int poright)
    {
        if (inleft > inright || poleft > poright)
            return nullptr;
        TreeNode *node = new TreeNode(postorder[poright]);
        auto it = find(inorder.begin() + inleft, inorder.begin() + inright + 1, postorder[poright]);
        int mid=it-inorder.begin();
        node->left = build(inorder, inleft, mid - 1, postorder, poleft, poleft + mid - inleft - 1);
        node->right = build(inorder, mid + 1, inright, postorder, poleft + mid - inleft, poright - 1);
        return node;
    }
};
/*

*/
// @lc code=end
