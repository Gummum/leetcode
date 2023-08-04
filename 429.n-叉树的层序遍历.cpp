/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-04 09:33
 * @LastEditTime: 2023-08-04 09:34
 * @FilePath: \leetcode\429.n-叉树的层序遍历.cpp
 * @Description: 
 * @
 */

/*
 * @lc app=leetcode.cn id=429 lang=cpp
 *
 * [429] N 叉树的层序遍历
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>> result;
        queue<Node*> que;
        if (!root)
            return result;
                que.push(root);
        while (!que.empty())
        {
            int size = que.size();
            vector<int> tmp;
            for (int i = 0; i < size; i++)
            {
                Node *node = que.front();
                que.pop();
                for(int j=0;j<node->children.size();j++)
                {
                    if (node->children[j])
                        que.push(node->children[j]);
                }
                tmp.push_back(node->val);
            }
            result.push_back(tmp);
        }
        return result;
    }
};
// @lc code=end

