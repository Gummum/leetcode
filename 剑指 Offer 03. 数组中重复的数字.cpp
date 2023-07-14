/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-14 10:00
 * @LastEditTime: 2023-07-14 10:53
 * @FilePath: \leetcode\剑指 Offer 03. 数组中重复的数字.cpp
 * @Description: 
 * @
 */

/*

在一个长度为 n 的数组 nums 里的所有数字都在 0～n-1 的范围内。
数组中某些数字是重复的，但不知道有几个数字重复了，也不知道每个数字重复了几次。
请找出数组中任意一个重复的数字。


示例 1：

输入：
[2, 3, 1, 0, 2, 5, 3]
输出：2 或 3 

algorithm:用新数组的下标表示数值，内容表示出现次数

*/
class Solution {
public:
    int findRepeatNumber(vector<int>& nums) {
        int index=0,count=0;
        //初始化
        int numsArray[nums.size()];
        for(int i=0;i<nums.size();i++)
        {
            numsArray[i]=0;
        }
        //赋值
        for(int i=0;i<nums.size();i++)
        {
            numsArray[nums[i]]++;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(count<numsArray[i])
            {
                count=numsArray[i];
                index=i;
            }
        }
        return index;
    }
};
