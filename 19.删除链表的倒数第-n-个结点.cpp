/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-01 09:22
 * @LastEditTime: 2023-08-01 09:35
 * @FilePath: \leetcode\19.删除链表的倒数第-n-个结点.cpp
 * @Description: 
 * @
 */

/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr)return nullptr;
        ListNode* dhead=new ListNode(0,head);
        ListNode* fast=dhead->next;
        ListNode* slow=dhead;
        while(fast&&n--)
        {   
            fast=fast->next;
        }
        while (fast)
        {
            fast=fast->next;
            slow=slow->next;
        }
        fast=slow->next;
        slow->next=fast->next;
        delete fast;
        fast=nullptr;
        return dhead->next;
    }
};
// @lc code=end

