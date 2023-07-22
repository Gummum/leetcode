/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-20 16:01
 * @LastEditTime: 2023-07-21 14:39
 * @FilePath: \leetcode\剑指 Offer 20. 表示数值的字符串.cpp
 * @Description: not pass
 * @
 */

/*
请实现一个函数用来判断字符串是否表示数值（包括整数和小数）。

数值（按顺序）可以分成以下几个部分：

若干空格
一个 小数 或者 整数
（可选）一个 'e' 或 'E' ，后面跟着一个 整数
若干空格
小数（按顺序）可以分成以下几个部分：

（可选）一个符号字符（'+' 或 '-'）
下述格式之一：
至少一位数字，后面跟着一个点 '.'
至少一位数字，后面跟着一个点 '.' ，后面再跟着至少一位数字
一个点 '.' ，后面跟着至少一位数字
整数（按顺序）可以分成以下几个部分：

（可选）一个符号字符（'+' 或 '-'）
至少一位数字

部分数值列举如下：
["+100", "5e2", "-123", "3.1416", "-1E-16", "0123"]

部分非数值列举如下：

["12e", "1a3.14", "1.2.3", "+-5", "12e+5.4"]
 
示例 1：
输入：s = "0"
输出：true

示例 2：
输入：s = "e"
输出：false

示例 3：
输入：s = "."
输出：false

示例 4：
输入：s = "    .1  "
输出：true

提示：

1 <= s.length <= 20
s 仅含英文字母（大写和小写），数字（0-9），加号 '+' ，减号 '-' ，空格 ' ' 或者点 '.' 。

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/biao-shi-shu-zhi-de-zi-fu-chuan-lcof
*/

class Solution {
public:
    bool isNumber(string s) {
        if(s.empty()||(s.size()==1&&(s[0]-'0'<0)&&(s[0]-'0'>9)))
            return false;
        bool symbol=false, point=false,eOrE=false,blank=false;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' '&&blank==false)
            {
                while (s[i]==' ')i++;
                blank=true;
            }
            else if(s[i]==' '&&blank==true)
                return false;
            if(s[i]=='.')
            {
                if(point==true)
                    return false;
                point = true;
                if(i==0||i==s.size()-1)
                {
                    if(i==0&&(s[i+1]-'0'<0)&&(s[i+1]-'0'>9))
                    {
                        return false;
                    }
                    else if(i==(s.size()-1)&&(s[i-1]-'0'<0)&&(s[i-1]-'0'>9))
                    {
                        return false;
                    }
                    else
                    {
                        if((s[i-1]-'0'<0)&&(s[i-1]-'0'>9)&&(s[i+1]-'0'<0)&&(s[i+1]-'0'>9))
                        {
                            return false;
                        }
                    }
                }
            }
            else if(s[i])
            {

            }
        }
    }
};
/*
class Solution {
private:
    // 整数的格式可以用[+|-]B表示, 其中B为无符号整数
    bool scanInteger(const string s, int& index){

        if(s[index] == '+' || s[index] == '-')
            ++index;

        return scanUnsignedInteger(s, index);
    }
    
    bool scanUnsignedInteger(const string s, int& index){

        int befor = index;
        while(index != s.size() && s[index] >= '0' && s[index] <= '9')
            index ++;

        return index > befor;
    }
public:
    // 数字的格式可以用A[.[B]][e|EC]或者.B[e|EC]表示，
    // 其中A和C都是整数（可以有正负号，也可以没有），而B是一个无符号整数
    bool isNumber(string s) {

        if(s.size() == 0)
            return false;
        int index = 0;

        //字符串开始有空格，可以返回true
        while(s[index] == ' ')  //书中代码没有该项测试
            ++index;

        bool numeric = scanInteger(s, index);

        // 如果出现'.'，接下来是数字的小数部分
        if(s[index] == '.'){

            ++index;

            // 下面一行代码用||的原因：
            // 1. 小数可以没有整数部分，例如.123等于0.123；
            // 2. 小数点后面可以没有数字，例如233.等于233.0；
            // 3. 当然小数点前面和后面可以有数字，例如233.666
            numeric = scanUnsignedInteger(s, index) || numeric;
        }

        // 如果出现'e'或者'E'，接下来跟着的是数字的指数部分
        if(s[index] == 'e' || s[index] == 'E'){

            ++index;

            // 下面一行代码用&&的原因：
            // 1. 当e或E前面没有数字时，整个字符串不能表示数字，例如.e1、e1；
            // 2. 当e或E后面没有整数时，整个字符串不能表示数字，例如12e、12e+5.4
            numeric = numeric && scanInteger(s ,index);
        }

        //字符串结尾有空格，可以返回true
        while(s[index] == ' ')
            ++index;
        cout << s.size() << " " << index;   //调试用

        return numeric && index == s.size();
    }
};
*/