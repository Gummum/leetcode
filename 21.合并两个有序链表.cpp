/***
 * @Author: gongbinwen
 * @Date: 2023-07-22 14:05
 * @LastEditTime: 2023-07-22 14:06
 * @FilePath: \leetcode\21.合并两个有序链表.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == nullptr || list2 == nullptr)
            return list1 ? list1: list2;

        ListNode *phead  = new ListNode(-1);
        ListNode *cruPtr = phead;

        while (list1 && list2)
        {
            if (list1->val > list2->val)
            {
                cruPtr->next = list2;
                list2        = list2->next;
            }
            else
            {
                cruPtr->next = list1;
                list1        = list1->next;
            }
            cruPtr = cruPtr->next;
        }
        cruPtr->next = list1 ? list1 : list2;
        return phead->next;
    }
};
// @lc code=end

/*
    原解法,考虑的太垃圾了,直接用一个新节点开始构建链表更简单
    class Solution
{
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
    {
        if (list1 == nullptr || list2 == nullptr)
            return list1 ? list1 : list2;

        if (list2->val < list1->val)
        {
            ListNode *tmp=list2->next;
            list2->next=list1;
            list1=list2;
            list2=tmp;
        }
        ListNode *list1Slow = list1;
        ListNode *list1Fast = list1->next;
        ListNode *list2Node = list2;
        while (list1Fast && list2)
        {
            if(list2Node->val < list1Fast->val)
            {
                list2=list2->next;
                list2Node->next=list1Fast;
                list1Slow->next=list2Node;
                list1Slow=list2Node;
                list2Node=list2;
            }
            else
            {
                list1Slow=list1Slow->next;
                list1Fast=list1Fast->next;
            }
        }
        if(list2)
        {
            list1Slow->next=list2;
        }
        return list1;
    }
};
*/