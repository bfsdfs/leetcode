/*
 * @lc app=leetcode.cn id=122 lang=cpp
 * @lcpr version=30113
 *
 * [122] 买卖股票的最佳时机 II
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
  int maxProfit(vector<int> &prices) {
    int pre = prices[0];
    int sum = 0;
    for (int i = 1; i < prices.size(); i++) {
      if (prices[i] > pre) {
        sum += (prices[i] - pre);
      }
      pre = prices[i];
    }
    return sum;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [7,1,5,3,6,4]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4,5]\n
// @lcpr case=end

// @lcpr case=start
// [7,6,4,3,1]\n
// @lcpr case=end

 */
