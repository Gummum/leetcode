/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-31 13:56
 * @LastEditTime: 2023-07-31 15:18
 * @FilePath: \leetcode\203.移除链表元素.cpp
 * @Description: pass 可以用一个头节点来操作，就不用执行两遍while了
 * @
 */

/*
 * @lc app=leetcode.cn id=203 lang=cpp
 *
 * [203] 移除链表元素
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while(head&&head->val==val)head=head->next;
        if(head==nullptr)return head;
        ListNode* phead=head;
        ListNode* pnext=head->next;
        while(pnext!=nullptr)
        {
            if(pnext->val==val)
            {
                phead->next=pnext->next;
                delete pnext;
                 
            }
            else
                phead=pnext;
            pnext=phead->next; 
              
        }
        return head;
    }
};
// @lc code=end

