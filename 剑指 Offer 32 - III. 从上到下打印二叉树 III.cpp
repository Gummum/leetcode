/***
 * @Author: gongbinwen
 * @Date: 2023-07-24 12:30
 * @LastEditTime: 2023-07-24 12:32
 * @FilePath: \leetcode\剑指 Offer 32 - III. 从上到下打印二叉树 III.cpp
 * @Description:pass
 * @
 */

/*
请实现一个函数按照之字形顺序打印二叉树，即第一行按照从左到右的顺序打印，第二层按照从右到左的顺序打印，第三行再按照从左到右的顺序打印，其他行以此类推。

例如:
给定二叉树: [3,9,20,null,null,15,7],

    3
   / \
  9  20
    /  \
   15   7
返回其层次遍历结果：

[
  [3],
  [20,9],
  [15,7]
]

提示：

节点总数 <= 1000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/cong-shang-dao-xia-da-yin-er-cha-shu-iii-lcof
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
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> result;
        if (root == nullptr)
            return result;
        queue<TreeNode *> que;
        que.push(root);
        int flag = 1;
        while (!que.empty())
        {
            int size = que.size();
            vector<int> vec;
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
            if(flag==0)
            {
                reverse(vec.begin(),vec.end());
                flag=1;
            }
            else
            {
                flag=0;
            }
            result.push_back(vec);
        }
        return result;
    }
};