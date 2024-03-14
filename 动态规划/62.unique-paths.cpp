/*
 * @lc app=leetcode.cn id=62 lang=cpp
 * @lcpr version=30113
 *
 * [62] 不同路径
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
  int uniquePaths(int m, int n) {
    vector<int> above(n, 1);
    for (size_t i = 0; i < m; i++) {
      for (size_t j = 1; j < n; j++) {
        if (i == 0 || j == 0)
          continue;
        above[j] += above[j - 1];
      }
    }
    return above[n - 1];
  }
};
// @lc code=end

/*
// @lcpr case=start
// 3\n7\n
// @lcpr case=end

// @lcpr case=start
// 3\n2\n
// @lcpr case=end

// @lcpr case=start
// 7\n3\n
// @lcpr case=end

// @lcpr case=start
// 3\n3\n
// @lcpr case=end

 */
