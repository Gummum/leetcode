/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-29 09:21
 * @LastEditTime: 2023-07-29 10:04
 * @FilePath: \leetcode\160.相交链表.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=160 lang=cpp
 *
 * [160] 相交链表
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (headA == nullptr || headB == nullptr)
            return nullptr;
        ListNode *pheadA = headA;
        ListNode *pheadB = headB;
        while (pheadA != pheadB)
        {
            pheadA = pheadA == nullptr ? headB : pheadA->next;
            pheadB = pheadB == nullptr ? headA : pheadB->next;
        }
        return pheadA;
    }
};
// @lc code=end
