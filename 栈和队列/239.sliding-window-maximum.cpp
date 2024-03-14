/*
 * @lc app=leetcode.cn id=239 lang=cpp
 * @lcpr version=30113
 *
 * [239] 滑动窗口最大值
 */

// @lcpr-template-start
#include <random>
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
  vector<int> maxSlidingWindow(vector<int> &nums, int k) {
    vector<int> res;
    deque<int> que;
    for (int i = 0; i < k; ++i) {
      while (!que.empty() && nums[i] > que.back()) {
        que.pop_back();
      }
      que.push_back(nums[i]);
    }
    res.push_back(que.front());
    for (int i = k; i < nums.size(); ++i) {

      while (!que.empty() && nums[i] > que.back()) {
        que.pop_back();
      }
      que.push_back(nums[i]);

      if (!que.empty() && nums[i - k] == que.front()) {
        que.pop_front();
      }

      res.push_back(que.front());
    }

    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,3,-1,-3,5,3,6,7]\n3\n
// @lcpr case=end

// @lcpr case=start
// [1]\n1\n
// @lcpr case=end

 */
