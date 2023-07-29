/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-29 12:32
 * @LastEditTime: 2023-07-29 12:32
 * @FilePath: \leetcode\剑指 Offer 56 - I. 数组中数字出现的次数.cpp
 * @Description: pass
 * @
 */

/*
一个整型数组 nums 里除两个数字之外，其他数字都出现了两次。
请写程序找出这两个只出现一次的数字。要求时间复杂度是O(n)，空间复杂度是O(1)。

示例 1：
输入：nums = [4,1,4,6]
输出：[1,6] 或 [6,1]

示例 2：
输入：nums = [1,2,10,4,1,4,3,3]
输出：[2,10] 或 [10,2]
 

限制：
2 <= nums.length <= 10000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/shu-zu-zhong-shu-zi-chu-xian-de-ci-shu-lcof
著作权归领扣网络所有。商业转载请联系官方授权，非商业转载请注明出处。
*/
class Solution {
public:
    vector<int> singleNumbers(vector<int>& nums) {
        if(nums.size()==2)return nums;
        sort(nums.begin(),nums.end());
        vector<int> result(2,-1);
        int num=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=nums[i+1])
                result.push[num++]=nums[i];
            else
                i++;
            if(num>=2)
                break;
        }
        return result;
    }
};
/*
    //异或解题
    class Solution {
    public:
        vector<int> singleNumbers(vector<int>& nums) {
            int ret = 0;
            for (int n : nums)
                ret ^= n;
            int div = 1;
            while ((div & ret) == 0)
                div <<= 1;
            int a = 0, b = 0;
            for (int n : nums)
                if (div & n)
                    a ^= n;
                else
                    b ^= n;
            return vector<int>{a, b};
        }
    };

*/