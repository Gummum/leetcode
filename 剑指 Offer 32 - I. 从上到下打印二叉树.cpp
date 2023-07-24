/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-24 11:21
 * @LastEditTime: 2023-07-24 12:24
 * @FilePath: \leetcode\剑指 Offer 32 - I. 从上到下打印二叉树.cpp
 * @Description: pass
 * @
 */

/*
从上到下打印出二叉树的每个节点，同一层的节点按照从左到右的顺序打印。

例如:
给定二叉树: [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
返回：

[3,9,20,15,7]
 
提示：

节点总数 <= 1000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/cong-shang-dao-xia-da-yin-er-cha-shu-lcof
*/

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
    vector<int> levelOrder(TreeNode *root)
    {
        vector<int> vec;
        if (root == nullptr)
            return vec;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty())
        {
            int size = que.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = que.front();
                que.pop();
                vec.push_back(node->val);
                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);
            }
        }
        return vec;
    }
};
/*
    层序遍历:用队列
    注意size要用固定值，que的size是固定的
*/