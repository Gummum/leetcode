/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-04 00:38
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-04 00:52
 * @FilePath: \leetcode\347.前-k-个高频元素.cpp
 * @Description: not pass
 * @
 */

/*
 * @lc app=leetcode.cn id=347 lang=cpp
 *
 * [347] 前 K 个高频元素
 */

// @lc code=start
class Solution {
public:
    class mycomparison
    {
    public:
        bool operator()(const pair<int, int> &lhs, const pair<int, int> &rhs)
        {
            return lhs.second > rhs.second;
        }
    };
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> map;
        for(auto& i:nums)
            map[i]++;
        priority_queue < pair<int, int>, vector<pair<int, int>>, mycomparison> prique;
        for(auto it=map.begin();it!=map.end();it++)
        {
            prique.push(*it);
            if(prique.size()>k)
                prique.pop();
        }
        vector<int>result;
        while(!prique.empty())
        {
            result.push_back(prique.top().first);
            prique.pop();
        }
        return result;
    }
};
// @lc code=end

