// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=56 lang=cpp
 * @lcpr version=30113
 *
 * [56] 合并区间
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
  vector<vector<int>> merge(vector<vector<int>> &intervals) {
    vector<vector<int>> res;
    auto cmp = [](const vector<int> &lhs, const vector<int> &rhs) {
      return lhs[0] == rhs[0] ? lhs[1] < rhs[1] : lhs[0] < rhs[0];
    };
    sort(intervals.begin(), intervals.end(), cmp);
    res.push_back(intervals[0]);
    for (int i = 1; i < intervals.size(); i++) {
      auto &it = res.back();
      if (intervals[i][0] <= it[1]) {
        it[1] = max(intervals[i][1], it[1]);
      } else {
        res.push_back(intervals[i]);
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [[1,3],[2,6],[8,10],[15,18]]\n
// @lcpr case=end

// @lcpr case=start
// [[1,4],[4,5]]\n
// @lcpr case=end

 */
