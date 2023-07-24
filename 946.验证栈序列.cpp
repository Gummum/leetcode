/*
 * @lc app=leetcode.cn id=946 lang=cpp
 *
 * [946] 验证栈序列
 */

// @lc code=start
class Solution
{
public:
    bool validateStackSequences(vector<int> &pushed, vector<int> &popped)
    {
        int i = 0;
        int j = 0;
        stack<int> stc;
        while (j < popped.size() && i < pushed.size())
        {
            stc.push(pushed[i]);
            i++;
            while (!stc.empty() && stc.top() == popped[j])
            {
                j++;
                stc.pop();
            }
        }
        if (i == j)
            return true;
        return false;
    }
};
// @lc code=end
/*
    用栈模拟
*/