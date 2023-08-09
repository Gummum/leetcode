/***
 * @Author: gongbinwen
 * @Date: 2023-08-09 14:10
 * @LastEditTime: 2023-08-09 14:10
 * @FilePath: \leetcode\39.组合总和.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=39 lang=cpp
 *
 * [39] 组合总和
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> vec;
    
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        backtracking(candidates,target,0,0);
        return result;
    }
    void backtracking(vector<int> &candidates, int target,int sum,int index)
    {
        if(sum>target)return ;
        else if(sum==target)
        {
            result.push_back(vec);
            return;
        }
        for(int i=index;i<candidates.size();i++)
        {
            sum+=candidates[i];
            vec.push_back(candidates[i]);
            backtracking(candidates,target,sum,i);
            vec.pop_back();
            sum-=candidates[i];
        }

    }
};
// @lc code=end
