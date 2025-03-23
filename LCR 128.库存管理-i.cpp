/*
 * @lc app=leetcode.cn id=LCR 128 lang=cpp
 * @lcpr version=30204
 *
 * [LCR 128] 库存管理 I
 */


// @lcpr-template-start
using namespace std;
#include <algorithm>
#include <array>
#include <bitset>
#include <climits>
#include <deque>
#include <functional>
#include <iostream>
#include <list>
#include <queue>
#include <stack>
#include <tuple>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
    int inventoryManagement(vector<int>& stock) {
        int left = 0, right = stock.size() - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (stock[mid] > stock[right])
                left = mid + 1;
            else if (stock[mid] < stock[right])
                right = mid;
            else
                right--;
        }
        return stock[left];
    }
};
// @lc code=end



/*
// @lcpr case=start
// [4,5,8,3,4]\n
// @lcpr case=end

// @lcpr case=start
// [5,7,9,1,2]\n
// @lcpr case=end

 */

