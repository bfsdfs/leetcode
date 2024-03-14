// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=63 lang=cpp
 * @lcpr version=30113
 *
 * [63] 不同路径 II
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
  int uniquePathsWithObstacles(vector<vector<int>> &obstacleGrid) {
    if (obstacleGrid[0][0] == 1)
      return 0;
    vector<int> dp(obstacleGrid[0].size());
    for (int j = 0; j < dp.size(); ++j)
      if (obstacleGrid[0][j] == 1)
        dp[j] = 0;
      else if (j == 0)
        dp[j] = 1;
      else
        dp[j] = dp[j - 1];

    for (int i = 1; i < obstacleGrid.size(); ++i)
      for (int j = 0; j < dp.size(); ++j) {
        if (obstacleGrid[i][j] == 1)
          dp[j] = 0;
        else if (j != 0)
          dp[j] = dp[j] + dp[j - 1];
      }
    return dp.back();
  }
};
// @lc code=end

/*
// @lcpr case=start
// [[0,0,0],[0,1,0],[0,0,0]]\n
// @lcpr case=end

// @lcpr case=start
// [[0,1],[0,0]]\n
// @lcpr case=end

 */
