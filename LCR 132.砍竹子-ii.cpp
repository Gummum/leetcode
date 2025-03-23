/*
 * @lc app=leetcode.cn id=LCR 132 lang=cpp
 * @lcpr version=30204
 *
 * [LCR 132] 砍竹子 II
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
        int p = 1000000007;
        long rst = 1;
        for (int i = 1; i < a; i++)
            rst = 3 * rst % p;
        if (r == 2)
            return rst * 6 % p;
        else if (r == 1)
            return rst * 4 % p;
        return rst * 3 % p;
    }
};
// @lc code=end



/*
// @lcpr case=start
// 12\n
// @lcpr case=end

 */

