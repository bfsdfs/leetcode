/*
 * @lc app=leetcode.cn id=216 lang=cpp
 * @lcpr version=30113
 *
 * [216] 组合总和 III
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
  vector<vector<int>> res;
  vector<int> path;
  int sum = 0;
  vector<vector<int>> combinationSum3(int size, int target) {
    backtrace(1, 9, size, target);
    return res;
  }

  void backtrace(int start, int end, int sz, int target) {
    if (path.size() == sz) {
      if (sum == target)
        res.push_back(path);
      return;
    }
    for (int i = start; i <= end - (sz - path.size()) + 1; i++) {
      path.push_back(i);
      sum += i;
      backtrace(i + 1, end, sz, target);
      sum -= i;
      path.pop_back();
    }
    return;
  }
};
// @lc code=end

/*
// @lcpr case=start
// 3\n7\n
// @lcpr case=end

// @lcpr case=start
// 3\n9\n
// @lcpr case=end

// @lcpr case=start
// 4\n1\n
// @lcpr case=end

 */
