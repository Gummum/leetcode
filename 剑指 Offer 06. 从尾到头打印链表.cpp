/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-15 11:27
 * @LastEditTime: 2023-07-15 12:18
 * @FilePath: \leetcode\剑指 Offer 06. 从尾到头打印链表.cpp
 * @Description: pass
 * @
 */


/*
输入一个链表的头节点，从尾到头反过来返回每个节点的值（用数组返回）。

示例 1：

输入：head = [1,3,2]
输出：[2,3,1]
 
限制：

0 <= 链表长度 <= 10000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/cong-wei-dao-tou-da-yin-lian-biao-lcof
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> reversePrint(ListNode* head) {
        if(head==nullptr)return null;
        vector result;
        while(head!=nullptr)
        {
            result.push_back(head->val);
            head=head->next;
        }
        reverse(result.begin(),result.end());
        return result;
    }
};
/*
解法1：
    step1：
        将链表的值存进vector中
    step2:
        反转vector
解法2：用栈
    step1:
        将链表的值入栈
    step2:
        将栈顶的值插入到vector中
*/