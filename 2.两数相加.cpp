/***
 * @Author: gongbinwen
 * @Date: 2023-08-09 09:40
 * @LastEditTime: 2023-08-09 09:49
 * @FilePath: \leetcode\2.两数相加.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=2 lang=cpp
 *
 * [2] 两数相加
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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *head=new ListNode(0);
        ListNode *cur=head;
        int num = 0;
        while (l1 || l2)
        {
            int n1=l1?l1->val:0;
            int n2=l2?l2->val:0;
            int tmp = n1 + n2 + num;
            num = tmp/10;
            cur->next=new ListNode(tmp % 10);
            if(l1)
                l1 = l1->next;
            if(l2)
                l2 = l2->next;
            cur=cur->next;
        }
        if (num)
            cur->next = new ListNode(num);

        return head->next;
    }
};
// @lc code=end
