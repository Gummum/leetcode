/***
 * @Author: gongbinwen
 * @Date: 2023-08-01 09:06
 * @LastEditTime: 2023-08-01 09:17
 * @FilePath: \leetcode\24.两两交换链表中的节点.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
class Solution
{
public:
    ListNode *swapPairs(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode *phead = new ListNode(0, head);
        ListNode *slow = head;
        ListNode *fast = head->next;
        head = phead;
        while (slow && fast)
        {
            head->next = fast;
            head = slow;
            slow->next = fast->next;
            fast->next = slow;
            slow = slow->next;
            if (!slow)
                break;
            fast = slow->next;
        }
        return phead->next;
    }
};
// @lc code=end
