/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-31 09:29
 * @LastEditTime: 2023-07-31 10:44
 * @FilePath: \leetcode\977.有序数组的平方.cpp
 * @Description: 自己的解法时间复杂度O(n*logn+n),没有用上数组已经排列的性质
 * @
 */

/*
 * @lc app=leetcode.cn id=977 lang=cpp
 *
 * [977] 有序数组的平方
 */

// @lc code=start
class Solution {
public:
//双指针好解法
    vector<int> sortedSquares(vector<int>& nums) {
        int left=0,right=nums.size()-1;
        vector<int> result(nums.size());
        int index=nums.size()-1;
        while(left<=right)
        {
            int leftPow=nums[left]*nums[left];
            int rightPow=nums[right]*nums[right];
            if(leftPow<rightPow)
            {
                result[index--]=rightPow;
                right--;
            }
            else
            {
                result[index--]=leftPow;
                left++;
            }
        }
        return result;
    }
};
// @lc code=end
/*
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        return nums;
    }
};
*/
