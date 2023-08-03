/***
 * @Author: gongbinwen
 * @Date: 2023-07-29 15:45
 * @LastEditTime: 2023-07-29 15:45
 * @FilePath: \leetcode\239.滑动窗口最大值.cpp
 * @Description: pass
 */

/*
 * @lc app=leetcode.cn id=239 lang=cpp
 *
 * [239] 滑动窗口最大值
 */

// @lc code=start
class Solution
{
public:
//储存值的形式
    vector<int> maxSlidingWindow(vector<int> &nums, int k)
    {
        vector<int> result;
        deque<int> deq;
        for(int i=0;i<k;i++)
        {
            while(!deq.empty()&&deq.back()<nums[i])
            {
                deq.pop_back();
            }
            deq.push_back(nums[i]);
        }
        result.push_back(deq.front());
        for(int i=k;i<nums.size();i++)
        {
            if(nums[i-k]==deq.front())
                deq.pop_front();
            while (!deq.empty()&&deq.back() < nums[i])
            {
                deq.pop_back();
            }
            deq.push_back(nums[i]);
            result.push_back(deq.front());
        }
        return result;
    }
};
// @lc code=end
/*
//储存下标的形式
        int n = nums.size();
        deque<int> q;
        for (int i = 0; i < k; i++)
        {
            while (!q.empty() && nums[i] >= nums[q.back()])
                q.pop_back();
            q.push_back(i);
        }
        vector<int> result = {nums[q.front()]};
        for (int i = k; i < nums.size(); i++)
        {
            while (!q.empty() && nums[i] >= nums[q.back()])
                q.pop_back();
            q.push_back(i);
            if (q.front() <= i - k)
                q.pop_front();
            result.push_back(nums[q.front()]);
        }
        return result;
        */