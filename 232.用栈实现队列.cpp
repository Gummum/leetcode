/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-03 09:21
 * @LastEditTime: 2023-08-03 10:40
 * @FilePath: \leetcode\232.用栈实现队列.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=232 lang=cpp
 *
 * [232] 用栈实现队列
 */

// @lc code=start
class MyQueue {
public:
    MyQueue() {

    }
    
    void push(int x) {
        stc1.push(x);
    }
    
    int pop() {
        if(!stc2.empty())
        {
           int value = stc2.top();
           stc2.pop();
           return value;
        }
        while(!stc1.empty())
        {
            stc2.push(stc1.top());
            stc1.pop();
        }
        int value = stc2.top();
        stc2.pop();
        return value;
    }
    
    int peek() {
        if(!stc2.empty())
        {
           int value = stc2.top();
           return value;
        }
        while(!stc1.empty())
        {
            stc2.push(stc1.top());
            stc1.pop();
        }
        int value = stc2.top();
        return value;
    }
    
    bool empty() {
        if(stc1.empty()&&stc2.empty())
            return true;
        return false;
    }
private:
    stack<int> stc1;
    stack<int> stc2;

};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */
// @lc code=end

