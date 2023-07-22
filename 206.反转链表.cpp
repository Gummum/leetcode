/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-22 13:42
 * @LastEditTime: 2023-07-22 14:04
 * @FilePath: \leetcode\206.反转链表.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=206 lang=cpp
 *
 * [206] 反转链表
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
    ListNode *reverseList(ListNode *head)
    {
        if (!head || !head->next)
            return head;

        ListNode *phead      = new ListNode;
        ListNode *fast       = head->next;
        ListNode *slow       = head;
        phead->next = head;

        while (fast)
        {
            slow->next  = fast->next;
            fast->next  = phead->next;
            phead->next = fast;
            fast        = slow->next;
        }

        return phead->next;
    }
};
// @lc code=end
/*
    注意交换的时候指针指向
*/