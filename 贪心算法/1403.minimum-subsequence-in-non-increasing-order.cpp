/*
 * @lc app=leetcode.cn id=1403 lang=cpp
 * @lcpr version=30113
 *
 * [1403] 非递增顺序的最小子序列
 */

// @lcpr-template-start
#include <numeric>
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
  vector<int> minSubsequence(vector<int> &nums) {
    auto cmp = [](int lhs, int rhs) { return lhs > rhs; };
    sort(nums.begin(), nums.end(), cmp);
    int sum = accumulate(nums.begin(), nums.end(), 0);
    int subnum = 0;
    int i = 0;
    for (i = 0; i < nums.size(); ++i) {
      subnum += nums[i];
      sum -= nums[i];
      if (subnum > sum)
        break;
    }
    return vector<int>(nums.begin(), nums.begin() + i + 1);
  }
};
// @lc code=end

/*
// @lcpr case=start
// [4,3,10,9,8]\n
// @lcpr case=end

// @lcpr case=start
// [4,4,7,6,7]\n
// @lcpr case=end

// @lcpr case=start
// [6]\n
// @lcpr case=end

 */
