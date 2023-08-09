/***
 * @Author: gongbinwen
 * @Date: 2023-08-09 14:24
 * @LastEditTime: 2023-08-09 14:35
 * @FilePath: \leetcode\40.组合总和-ii.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> vec;
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        backtracking(candidates, target, 0, 0);
        return result;
    }
    void backtracking(vector<int> &candidates, int target, int sum, int index)
    {
        if (sum > target)
            return;
        else if (sum == target)
        {
            result.push_back(vec);
            return;
        }
        for (int i = index; i < candidates.size(); i++)
        {
            if (i!=index && candidates[i] == candidates[i - 1])
                continue;
            sum += candidates[i];
            vec.push_back(candidates[i]);
            backtracking(candidates, target, sum, i + 1);
            sum -= candidates[i];
            vec.pop_back();
        }
    }
};
// @lc code=end
