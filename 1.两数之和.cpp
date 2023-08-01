/*** 
 * @Author: Gummum 1194148070@qq.com
 * @Date: 2023-08-01 18:52
 * @LastEditors: Gummum 1194148070@qq.com
 * @LastEditTime: 2023-08-01 19:34
 * @FilePath: \leetcode\1.两数之和.cpp
 * @Description: pass 自己的解法太啰嗦了
 * @两个数互相找，不论你在不在map里面都能找的到的
 */

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
        std::unordered_map<int, int> map;
        for (int i = 0; i < nums.size(); i++)
        {
            // 遍历当前元素，并在map中寻找是否有匹配的key
            auto iter = map.find(target - nums[i]);
            if (iter != map.end())
            {
                return {iter->second, i};
            }
            // 如果没找到匹配对，就把访问过的元素和下标加入到map中
            map.insert(pair<int, int>(nums[i], i));
        }
        return {};
    }
};
// @lc code=end

/*
//自己的解法
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
*/