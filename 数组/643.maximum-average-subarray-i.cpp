/*
 * @lc app=leetcode.cn id=643 lang=cpp
 * @lcpr version=30113
 *
 * [643] 子数组最大平均数 I
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
  double findMaxAverage(vector<int> &nums, int k) {
    int maxSum = accumulate(nums.begin(), nums.begin() + k, 0);
    int sum = maxSum;
    int sz = nums.size() - k;
    for (int i = 1; i <= sz; i++) {
      sum = sum - nums[i - 1] + nums[i + k - 1];
      maxSum = max(sum, maxSum);
    }
    return maxSum * 1.0 / k;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,12,-5,-6,50,3]\n4\n
// @lcpr case=end

// @lcpr case=start
// [5]\n1\n
// @lcpr case=end

 */
