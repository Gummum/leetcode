/*** 
 * @Author: gongbinwen
 * @Date: 2023-07-25 13:45
 * @LastEditTime: 2023-07-25 13:58
 * @FilePath: \leetcode\剑指 Offer 40. 最小的k个数.cpp
 * @Description: pass
 * @
 */

/*
输入整数数组 arr ，找出其中最小的 k 个数。例如，输入4、5、1、6、2、7、3、8这8个数字，则最小的4个数字是1、2、3、4。

示例 1：

输入：arr = [3,2,1], k = 2
输出：[1,2] 或者 [2,1]
示例 2：

输入：arr = [0,1,2,1], k = 1
输出：[0]
 
限制：
0 <= k <= arr.length <= 10000
0 <= arr[i] <= 10000

来源：力扣（LeetCode）
链接：https://leetcode.cn/problems/zui-xiao-de-kge-shu-lcof
*/
class Solution {
public:
    vector<int> getLeastNumbers(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        arr.resize(k);
        return arr;
    }
};
/*

*/