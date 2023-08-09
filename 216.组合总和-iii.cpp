/*** 
 * @Author: gongbinwen
 * @Date: 2023-08-09 11:34
 * @LastEditTime: 2023-08-09 12:34
 * @FilePath: \leetcode\216.组合总和-iii.cpp
 * @Description: pass
 * @
 */

/*
 * @lc app=leetcode.cn id=216 lang=cpp
 *
 * [216] 组合总和 III
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> result;
    vector<int> vec;
    vector<vector<int>> combinationSum3(int k, int n) {
        backtracking(k,n,1,0);
        return result;
    }
    void backtracking(int k,int n,int index,int sum)
    {
        if(sum>n)return ;
        if(vec.size()==k)
        {
            if(sum==n)
                result.push_back(vec);
            return ;
        }
        for(int i=index;i<=9-(k-vec.size())+1;i++)
        {
            sum+=i;
            vec.push_back(i);
            backtracking(k,n,i+1,sum);
            vec.pop_back();
            sum-=i;
        }
    } 
};
// @lc code=end

