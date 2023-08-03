/***
 * @Author: gongbinwen
 * @Date: 2023-08-03 10:41
 * @LastEditTime: 2023-08-03 12:28
 * @FilePath: \leetcode\225.用队列实现栈.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=225 lang=cpp
 *
 * [225] 用队列实现栈
 */

// @lc code=start
class MyStack
{
public:
    MyStack()
    {
    }

    void push(int x)
    {
        que.push(x);
    }

    int pop()
    {
        int size = que.size();
        while (--size)
        {
            que.push(que.front());
            que.pop();
        }
        int value = que.front();
        que.pop();
        return value;
    }

    int top()
    {
        int size = que.size();
        while (--size)
        {
            que.push(que.front());
            que.pop();
        }
        int value = que.front();
        que.push(que.front());
        que.pop();
        return value;
    }

    bool empty()
    {
        return que.empty();
    }

private:
    queue<int> que;
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
// @lc code=end
