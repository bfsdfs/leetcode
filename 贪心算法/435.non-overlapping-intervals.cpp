/*
 * @lc app=leetcode.cn id=435 lang=cpp
 * @lcpr version=30113
 *
 * [435] 无重叠区间
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
  int eraseOverlapIntervals(vector<vector<int>> &intervals) {
    int res = 0;
    auto cmp = [](const vector<int> &lhs, const vector<int> &rhs) {
      return lhs[0] == rhs[0] ? lhs[1] < rhs[1] : lhs[0] < rhs[0];
    };
    sort(intervals.begin(), intervals.end(), cmp);
    int sz = intervals.size();
    for (int i = 1; i < sz; i++) {
      if (intervals[i][0] < intervals[i - 1][1]) {
        res++;
        if (intervals[i][1] > intervals[i - 1][1])
          intervals[i][1] = intervals[i - 1][1];
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [[1,2],[2,3],[3,4],[1,3]]\n
// @lcpr case=end

// @lcpr case=start
// [ [1,2], [1,2], [1,2] ]\n
// @lcpr case=end

// @lcpr case=start
// [ [1,2], [2,3] ]\n
// @lcpr case=end

 */
