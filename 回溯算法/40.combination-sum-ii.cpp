/*
 * @lc app=leetcode.cn id=40 lang=cpp
 * @lcpr version=30113
 *
 * [40] 组合总和 II
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
  vector<vector<int>> combinationSum2(vector<int> &candidates, int target) {
    vector<bool> used(candidates.size(), false);
    sort(candidates.begin(), candidates.end());
    backtrace(candidates, used, target, 0);
    return res;
  }

  void backtrace(const vector<int> &candi, vector<bool> &used, int target,
                 int start) {
    if (sum >= target) {
      if (sum == target)
        res.push_back(path);
      return;
    }
    for (size_t i = start; i < candi.size(); i++) {
      if (i > 0 && candi[i] == candi[i - 1] && used[i - 1] == false)
        continue;
      path.push_back(candi[i]);
      sum += candi[i];
      used[i] = true;
      backtrace(candi, used, target, i + 1);
      path.pop_back();
      sum -= candi[i];
      used[i] = false;
    }
    return;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [10,1,2,7,6,1,5]\n8\n
// @lcpr case=end

// @lcpr case=start
// [2,5,2,1,2]\n5\n
// @lcpr case=end

 */
