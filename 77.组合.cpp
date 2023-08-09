/***
 * @Author: gongbinwen
 * @Date: 2023-08-09 11:15
 * @LastEditTime: 2023-08-09 11:25
 * @FilePath: \leetcode\77.组合.cpp
 * @Description:pass
 * @
 */

/*
 * @lc app=leetcode.cn id=77 lang=cpp
 *
 * [77] 组合
 */

// @lc code=start
class Solution
{
public:
    vector<vector<int>> result;
    vector<int> vec;
    vector<vector<int>> combine(int n, int k)
    {
        recurve(n, k, 1);
        return result;
    }
    void recurve(int n, int k, int num)
    {

        if (vec.size() == k)
        {
            result.push_back(vec);
            return;
        }

        for (int i = num; i <= n-(k - vec.size()) + 1; i++)
        {
            vec.push_back(i);
            recurve(n, k, i + 1);
            vec.pop_back();
        }
    }
};
// @lc code=end
