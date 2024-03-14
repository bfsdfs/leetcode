/*
 * @lc app=leetcode.cn id=39 lang=cpp
 * @lcpr version=30113
 *
 * [39] 组合总和
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
  vector<vector<int>> combinationSum(vector<int> &candidates, int target) {
    sort(candidates.begin(), candidates.end());
    backtrace(candidates, 0, target);
    return res;
  }

  void backtrace(const vector<int> &candidates, int start, int target) {
    if (sum >= target) {
      if (sum == target)
        res.push_back(path);
      return;
    }
    for (int i = start; i < candidates.size(); ++i) {
      path.push_back(candidates[i]);
      sum += candidates[i];
      backtrace(candidates, i, target);
      sum -= candidates[i];
      path.pop_back();
    }
    return;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [2,3,6,7]\n7\n
// @lcpr case=end

// @lcpr case=start
// [2,3,5]\n8\n
// @lcpr case=end

// @lcpr case=start
// [2]\n1\n
// @lcpr case=end

 */
