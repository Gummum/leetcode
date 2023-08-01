/***
 * @Author: gongbinwen
 * @Date: 2023-07-22 11:18
 * @LastEditTime: 2023-07-22 13:23
 * @FilePath: \leetcode\142.环形链表-ii.cpp
 * @Description:pass，先快慢指针判断是否有环，然后让fast=head,继续遍历，相交即是环交点
 * @
 */

/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    ListNode *detectCycle(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode *slow = head;
        ListNode *fast = head;

        do
        {
            fast = fast->next;
            if (fast == nullptr)
                return nullptr;
            fast = fast->next;
            if (fast == nullptr)
                return nullptr;
            slow = slow->next;

        } while (fast != slow);

        fast = head;
        while (fast != slow)
        {
            fast = fast->next;
            slow = slow->next;
        }

        return slow;
    }
};
// @lc code=end
/*
    a+(n+1)b+nc=2(a+b)⟹a=c+(n−1)(b+c)
*/
