/***
 * @Author: gongbinwen
 * @Date: 2023-07-31 16:06
 * @LastEditTime: 2023-07-31 16:30
 * @FilePath: \leetcode\707.设计链表.cpp
 * @Description:not pass 一开始指针越界，node=head->next改成node=head
 * @
 */

/*
 * @lc app=leetcode.cn id=707 lang=cpp
 *
 * [707] 设计链表
 */

// @lc code=start
class MyLinkedList
{
private:
    struct ListNode
    {
        int val;
        ListNode *next;
        ListNode() : val(0), next(nullptr){};
        ListNode(int _val) : val(_val), next(nullptr){};
        ListNode(int _val, ListNode *_next) : val(_val), next(_next){};
    };
    ListNode *head;
    int size;

public:
    MyLinkedList()
    {
        head = new ListNode;
        size = 0;
    }

    int get(int index)
    {
        if (index >= size||index<0)
            return -1;
        ListNode *node = head->next;
        while (index-- )
        {
            node = node->next;
        }
        return node->val;
    }

    void addAtHead(int val)
    {
        ListNode *node = new ListNode(val);
        node->next = head->next;
        head->next = node;
        size++;
    }

    void addAtTail(int val)
    {
        ListNode *node = new ListNode(val);
        ListNode *cur=head;
        while(cur->next)
            cur=cur->next;
        cur->next=node;
        size++;
    }

    void addAtIndex(int index, int val)
    {
        if (index > size)
            return;
        ListNode *node = new ListNode(val);
        ListNode *cur = head;
        while (index--)
        {
            cur = cur->next;
        }
        node->next = cur->next;
        cur->next = node;
        size++;
    }

    void deleteAtIndex(int index)
    {
        if (index >= size||index<0)
            return;
        ListNode *cur = head;
        while (index--)
        {
            cur = cur->next;
        }
        ListNode *tmp = cur->next;
        cur->next = tmp->next;
        delete tmp;
        tmp = nullptr;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end
