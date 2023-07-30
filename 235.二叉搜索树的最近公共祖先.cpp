/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-07-30 21:53
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-07-30 21:55
 * @FilePath: \leetcode\235.二叉搜索树的最近公共祖先.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=235 lang=cpp
 *
 * [235] 二叉搜索树的最近公共祖先
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution
{
public:
    TreeNode *lowestCommonAncestor(TreeNode *root, TreeNode *p, TreeNode *q)
    {
        if (root == q || root == p || root == NULL)
            return root;
        TreeNode *left = lowestCommonAncestor(root->left, p, q);
        TreeNode *right = lowestCommonAncestor(root->right, p, q);
        if (left != NULL && right != NULL)
            return root;
        if (left == NULL)
            return right;
        return left;
    }
};
// @lc code=end
/*
//利用了二叉搜索树 右节点>根节点>左节点的性质，单边回溯
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (root->val > p->val && root->val > q->val) {
            return lowestCommonAncestor(root->left, p, q);
        } else if (root->val < p->val && root->val < q->val) {
            return lowestCommonAncestor(root->right, p, q);
        } else return root;
    }
};
*/
