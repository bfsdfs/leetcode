/*
 * @lc app=leetcode.cn id=90 lang=cpp
 * @lcpr version=30113
 *
 * [90] 子集 II
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
  vector<vector<int>> subsetsWithDup(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    used = vector<bool>(nums.size(), false);
    backtrace(nums, 0);
    return res;
  }

  void backtrace(const vector<int> &nums, int start) {
    res.push_back(path);
    for (size_t i = start; i < nums.size(); i++) {
      if (i > 0 && nums[i - 1] == nums[i] && used[i - 1] == false) {
        continue;
      }

      path.push_back(nums[i]);
      used[i] = true;
      backtrace(nums, i + 1);
      path.pop_back();
      used[i] = false;
    }
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,2]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n
// @lcpr case=end

 */
