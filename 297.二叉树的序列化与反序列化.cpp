/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-25 08:59
 * @LastEditTime: 2023-07-25 10:57
 * @FilePath: \leetcode\297.二叉树的序列化与反序列化.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=297 lang=cpp
 *
 * [297] 二叉树的序列化与反序列化
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec
{
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        if(root==nullptr) return "$";
        string left=serialize(root->left);
        string right=serialize(root->right);
        return to_string(root->val)+" "+left+" "+right;
    }

    TreeNode* dfs(istringstream& is)
    {
        string s;
        is>>s;
        if(s=="$")
        {
            return nullptr;
        }
        TreeNode *node=new TreeNode(stoi(s));
        node->left=dfs(is);
        node->right=dfs(is);
        return node;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        istringstream is(data);
        return dfs(is);
    }
};
// Your Codec object will be instantiated and called as such:
// Codec codec;
// codec.deserialize(codec.serialize(root));

// Your Codec object will be instantiated and called as such:
// Codec ser, deser;
// TreeNode* ans = deser.deserialize(ser.serialize(root));
// @lc code=end

/*
    BFS：
    class Codec
{
public:
    // Encodes a tree to a single string.
    string serialize(TreeNode *root)
    {
        if (root == nullptr)
            return "$";
        string str;
        queue<TreeNode *> que;
        que.push(root);
        while (!que.empty())
        {
            int size = que.size();
            for (int i = 0; i < size; i++)
            {
                TreeNode *node = que.front();
                que.pop();
                if (node == nullptr)
                {
                    str += " $";
                }
                else
                {
                    str += " " + to_string(node->val);
                    que.push(node->left);
                    que.push(node->right);
                }
            }
        }
        return str;
    }

    // Decodes your encoded data to tree.
    TreeNode *deserialize(string data)
    {
        istringstream istr(data);
        string tmp;
        istr >> tmp;
        if (tmp == "$")
            return nullptr;
        queue<TreeNode *> que;
        TreeNode *head = new TreeNode(stoi(tmp));
        que.push(head);
        string left;
        string right;
        while (istr >> left >> right)
        {
            TreeNode *node = que.front();
            que.pop();
            if (left != "$")
            {
                node->left = new TreeNode(stoi(left));
                que.push(node->left);
            }
            if (right != "$")
            {
                node->right = new TreeNode(stoi(right));
                que.push(node->right);
            }
        }
        return head;
    }
};
*/