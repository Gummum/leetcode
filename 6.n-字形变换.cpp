/*
 * @lc app=leetcode.cn id=6 lang=cpp
 *
 * [6] N 字形变换
 * Description:not pass
 * 下面的是复现别人的答案
 */

// @lc code=start

class Solution {
public:
    string convert(string s, int numRows) {
        if(numRows<2)return s;
        vector<string> vec(numRows);
        int flag=-1,index=0;
        for(auto &c:s)
        {
            if(index==0||index==numRows-1)
                flag=-flag;
            vec[index].push_back(c);
            index+=flag;
        }
        for(int i=1;i<numRows;i++)
        {
            vec[0]+=vec[i];
        }
        return vec[0];
    }
};
// @lc code=end

/*


*/