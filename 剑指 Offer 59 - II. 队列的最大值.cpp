/***
 * @Author: gongbinwen
 * @Date: 2023-07-29 17:35
 * @LastEditTime: 2023-07-29 17:36
 * @FilePath: \leetcode\剑指 Offer 59 - II. 队列的最大值.cpp
 * @Description: not pass
 * @
 */

/*
请定义一个队列并实现函数 max_value 得到队列里的最大值，要求函数max_value、push_back 和 pop_front 的均摊时间复杂度都是O(1)。

若队列为空，pop_front 和 max_value 需要返回 -1

示例 1：
输入:
["MaxQueue","push_back","push_back","max_value","pop_front","max_value"]
[[],[1],[2],[],[],[]]
输出: [null,null,null,2,1,2]

示例 2：
输入:
["MaxQueue","pop_front","max_value"]
[[],[],[]]
输出: [null,-1,-1]
 

限制：
1 <= push_back,pop_front,max_value的总操作数 <= 10000
1 <= value <= 10^5

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/dui-lie-de-zui-da-zhi-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class MaxQueue
{
public:
    MaxQueue()
    {
    }

    int max_value()
    {
        if (deq.empty())
            return -1;
        return deq.front();
    }

    void push_back(int value)
    {
        que.push(value);
        while (!deq.empty() && value > deq.back())
            deq.pop_back();
        deq.push_back(value);
    }

    int pop_front()
    {
        if (que.empty())
            return -1;
        int value = que.front();
        que.pop();
        if (value == deq.front())
            deq.pop_front();
        return value;
    }
    queue<int> que;
    deque<int> deq;
};

/**
 * Your MaxQueue object will be instantiated and called as such:
 * MaxQueue* obj = new MaxQueue();
 * int param_1 = obj->max_value();
 * obj->push_back(value);
 * int param_3 = obj->pop_front();
 */