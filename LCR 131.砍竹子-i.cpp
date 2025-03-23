/*
 * @lc app=leetcode.cn id=LCR 131 lang=cpp
 * @lcpr version=30204
 *
 * [LCR 131] 砍竹子 I
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
    int cuttingBamboo(int bamboo_len) {
        if (bamboo_len <= 3)
            return bamboo_len - 1;

        int r = bamboo_len % 3;
        int a = bamboo_len / 3;
        if (r == 2)
            return pow(3, a) * 2;
        else if (r == 1)
            return pow(3, a - 1) * 4;
        return pow(3, a);
    }
};
// @lc code=end



/*
// @lcpr case=start
// 12\n
// @lcpr case=end

 */

