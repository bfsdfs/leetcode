// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=1005 lang=cpp
 * @lcpr version=30113
 *
 * [1005] K 次取反后最大化的数组和
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
  int largestSumAfterKNegations(vector<int> &nums, int k) {
    sort(nums.begin(), nums.end());
    int sum = 0;
    int minVal = INT_MAX;
    for (int i = 0; i < nums.size(); i++) {
      if (nums[i] < 0 && k > 0) {
        sum -= nums[i];
        k--;
      } else {
        sum += nums[i];
      }
      if (abs(nums[i]) < abs(minVal)) {
        minVal = nums[i];
      }
    }
    k = k % 2;
    if (k > 0)
      sum -= 2 * abs(minVal);
    return sum;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [4,2,3]\n1\n
// @lcpr case=end

// @lcpr case=start
// [3,-1,0,2]\n3\n
// @lcpr case=end

// @lcpr case=start
// [2,-3,-1,5,-4]\n2\n
// @lcpr case=end

 */
