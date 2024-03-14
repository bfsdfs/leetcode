/*
 * @lc app=leetcode.cn id=746 lang=cpp
 * @lcpr version=30113
 *
 * [746] 使用最小花费爬楼梯
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
  int minCostClimbingStairs(vector<int> &cost) {
    if (cost.size() == 1)
      return cost[0];
    int pre = 0;
    int cur = cost[0];
    for (size_t i = 1; i < cost.size(); i++) {
      int temp = min(cost[i] + pre, cost[i] + cur);
      pre = cur;
      cur = temp;
    }
    return min(pre, cur);
  }
};
// @lc code=end

/*
// @lcpr case=start
// [10,15,20]\n
// @lcpr case=end

// @lcpr case=start
// [1,100,1,1,1,100,1,1,100,1]\n
// @lcpr case=end

 */
