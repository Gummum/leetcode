/***
 * @Author: gongbinwen
 * @Date: 2023-07-24 14:52
 * @LastEditTime: 2023-07-24 14:53
 * @FilePath: \leetcode\138.复制带随机指针的链表.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=138 lang=cpp
 *
 * [138] 复制带随机指针的链表
 */

// @lc code=start
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;

    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution
{
public:
    Node *copyRandomList(Node *head)
    {
        if (head == nullptr)
            return head;
        unordered_map<Node *, Node *> hash;
        Node *cur = head;
        while (cur)
        {
            Node *node = new Node(cur->val, nullptr, nullptr);
            hash.insert({cur, node});
        }
        cur = head;
        while (cur)
        {
            if (cur->random)
            {
                hash.at(cur)->next   = hash.at(cur->next);
                hash.at(cur)->random = hash.at(cur->random);
            }
            cur = cur->next;
        }
        return head;
    }
};
// @lc code=end
/*
    复制后再赋值
    if (head == nullptr)
            return head;
        Node *cur = head;
        while (cur)
        {
            Node *node = new Node(cur->val, cur->next, nullptr);
            cur->next = node;
            cur = node->next;
        }
        cur = head;
        while (cur)
        {
            if (cur->random)
            {
                cur->next->random = cur->random->next;
            }
            cur=cur->next->next;
        }
        cur = head;
        Node *tmp = head->next;
        while (cur && cur->next)
        {
            Node *node=cur->next;
            cur->next = cur->next->next;
            cur = node;
        }
        return tmp;
    哈希表:注意hash.at(null)会出错
    class Solution
    {
    public:
        Node *copyRandomList(Node *head)
        {
            if (head == nullptr)
                return head;
            unordered_map<Node *, Node *> hash;
            Node *cur = head;
            while (cur)
            {
                Node *node = new Node(cur->val, nullptr, nullptr);
                hash.insert({cur, node});
                cur=cur->next;
            }
            cur = head;
            while (cur)
            {
                if(cur->next)
                {
                    hash.at(cur)->next = hash.at(cur->next);
                }
                if (cur->random)
                {
                    hash.at(cur)->random = hash.at(cur->random);
                }
                cur = cur->next;
            }
            return hash.at(head);
        }
    };
*/