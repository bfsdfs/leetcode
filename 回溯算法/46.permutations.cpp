// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=46 lang=cpp
 * @lcpr version=30113
 *
 * [46] 全排列
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
  vector<bool> used;
  vector<vector<int>> permute(vector<int> &nums) {
    used = vector<bool>(nums.size(), true);
    backtrace(nums, used);
    return res;
  }

  void backtrace(const vector<int> &nums, vector<bool> &used) {
    if (path.size() == nums.size()) {
      res.push_back(path);
      return;
    }
    for (auto i = 0; i < nums.size(); ++i) {
      if (used[i]) {
        used[i] = false;
        path.push_back(nums[i]);
        backtrace(nums, used);
        path.pop_back();
        used[i] = true;
      }
    }
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [0,1]\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */
