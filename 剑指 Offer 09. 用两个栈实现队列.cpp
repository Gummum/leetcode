/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-15 17:51
 * @LastEditTime: 2023-07-15 17:52
 * @FilePath: \leetcode\剑指 Offer 09. 用两个栈实现队列.cpp
 * @Description: 
 * @
 */

/*
用两个栈实现一个队列。队列的声明如下，请实现它的两个函数 appendTail 和 deleteHead ，分别完成在队列尾部插入整数和在队列头部删除整数的功能。(若队列中没有元素，deleteHead 操作返回 -1 )

示例 1：

输入：
["CQueue","appendTail","deleteHead","deleteHead","deleteHead"]
[[],[3],[],[],[]]
输出：[null,null,3,-1,-1]
示例 2：

输入：
["CQueue","deleteHead","appendTail","appendTail","deleteHead","deleteHead"]
[[],[],[5],[2],[],[]]
输出：[null,-1,null,null,5,2]

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/yong-liang-ge-zhan-shi-xian-dui-lie-lcof
*/

class CQueue {
public:
    CQueue() {

    }
    
    void appendTail(int value) {
        sta1.push(value);
    }
    
    int deleteHead() {
        if(sta1.empty()&&sta2.empty())return -1;
        if(sta2.empty())
        {
            while(!sta1.empty())
            {
                sta2.push(sta1.top());
                sta1.pop();
            }
        }
            int value=sta2.top();
            sta2.pop();
            return value; 
    }
private:
    stack<int> sta1;
    stack<int> sta2;
};
