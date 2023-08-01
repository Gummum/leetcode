/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

// @lc code=start
class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            map[nums[i]]++;
        }
        int value1;
        int value2;
        for (auto it = map.begin(); it != map.end(); it++)
        {
            value1 = it->first;
            value2 = target - it->first;
            it->second--;
            if (map.find(value2) != map.end() && map.find(value2)->second > 0)
            {
                break;
            }
        }
        vector<int> result;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == value1 || nums[i] == value2)
                result.push_back(i);
            if (result.size() == 2)
                break;
        }
        return result;
    }
};
// @lc code=end
