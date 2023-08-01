/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-01 16:30
 * @LastEditTime: 2023-08-01 16:49
 * @FilePath: \leetcode\202.快乐数.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=202 lang=cpp
 *
 * [202] 快乐数
 */

// @lc code=start
class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> set;
        while(n!=1)
        {
            int tmp=n;
            n=0;
            while(tmp)
            {
                n+=(tmp%10)*(tmp%10);
                tmp/=10;
            }
            if(set.find(n)!=set.end())
                return false;
            set.insert(n);
        }
        return true;
    }
};
// @lc code=end

