// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=134 lang=cpp
 * @lcpr version=30113
 *
 * [134] 加油站
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
  int canCompleteCircuit(vector<int> &gas, vector<int> &cost) {
    int diff = 0;
    int res = -1;
    int cur = 0;
    for (int i = 0; i < gas.size(); i++) {
      cur += gas[i] - cost[i];
      if (cur < 0) {
        cur = 0;
        res = -1;
      } else if (res < 0) {
        res = i;
      }
    }
    for (int i = 0; i < res; ++i) {
      diff += gas[i] - cost[i];
    }
    return cur + diff >= 0 ? res : -1;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3,4,5]\n[3,4,5,1,2]\n
// @lcpr case=end

// @lcpr case=start
// [2,3,4]\n[3,4,3]\n
// @lcpr case=end

 */
