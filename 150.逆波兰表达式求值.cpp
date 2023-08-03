/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-03 14:17
 * @LastEditTime: 2023-08-03 15:14
 * @FilePath: \leetcode\150.逆波兰表达式求值.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=150 lang=cpp
 *
 * [150] 逆波兰表达式求值
 */

// @lc code=start
class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> stc;
        for(int i=0;i<tokens.size();i++)
        {
            if(tokens[i]=="+"||tokens[i]=="-"||tokens[i]=="*"||tokens[i]=="/")
            {
                int value2=stc.top();
                stc.pop();
                int value1=stc.top();
                stc.pop();
                if(tokens[i]=="+")
                    value1+=value2;
                else if(tokens[i]=="-")
                    value1-=value2;
                else if(tokens[i]=="*")
                    value1*=value2;
                else 
                    value1/=value2;
                stc.push(value1);
            }
            else
            {
                stringstream stream(tokens[i]);
                int n=0;
                stream >> n;
                stc.push(n);
            }
        }
        return stc.top();
    }
};
// @lc code=end

