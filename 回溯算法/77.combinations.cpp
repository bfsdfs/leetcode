/*
 * @lc app=leetcode.cn id=77 lang=cpp
 * @lcpr version=30113
 *
 * [77] 组合
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
  vector<vector<int>> combine(int n, int k) {
    backtrace(1, n, k);
    return res;
  }

  void backtrace(int start, int n, int k) {
    if (path.size() == k) {
      res.push_back(path);
      return;
    }
    for (int i = start; i <= n - (k - path.size()) + 1; i++) {
      path.push_back(i);
      backtrace(i + 1, n, k);
      path.pop_back();
    }
    return;
  }
};
// @lc code=end

/*
// @lcpr case=start
// 4\n2\n
// @lcpr case=end

// @lcpr case=start
// 1\n1\n
// @lcpr case=end

 */
