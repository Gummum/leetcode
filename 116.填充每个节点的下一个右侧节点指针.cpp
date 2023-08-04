/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-04 11:30
 * @LastEditTime: 2023-08-04 11:32
 * @FilePath: \leetcode\116.填充每个节点的下一个右侧节点指针.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=116 lang=cpp
 *
 * [116] 填充每个节点的下一个右侧节点指针
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution
{
public:
    Node *connect(Node *root)
    {
        queue<Node *> que;
        if (!root)
            return root;
        que.push(root);
        while (!que.empty())
        {
            int size = que.size();
            vector<int> tmp;
            for (int i = 0; i < size; i++)
            {
                Node *node = que.front();
                que.pop();
                if (node->left)
                    que.push(node->left);
                if (node->right)
                    que.push(node->right);
                if(i<size-1)
                    node->next=que.front();
            }
        }
        return root;
    }
};
// @lc code=end
