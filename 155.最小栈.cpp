/***
 * @Author: gongbinwen
 * @Date: 2023-07-22 16:44
 * @LastEditTime: 2023-07-24 10:36
 * @FilePath: \leetcode\155.最小栈.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=155 lang=cpp
 *
 * [155] 最小栈
 */

// @lc code=start
class MinStack
{
public:
    MinStack()
    {
        stcMin.push(pow(2, 31) - 1);
    }

    void push(int val)
    {
        stc.push(val);
        stcMin.push(min(stcMin.top(), val));
    }

    void pop()
    {
        stc.pop();
        stcMin.pop();
    }

    int top()
    {
        return stc.top();
    }

    int getMin()
    {
        return stcMin.top();
    }

private:
    stack<int> stc;
    stack<int> stcMin;
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
// @lc code=end
/*
    用两个栈，一个存数值，一个存当前栈的最小值
*/
