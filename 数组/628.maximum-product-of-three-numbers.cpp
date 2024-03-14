/*
 * @lc app=leetcode.cn id=628 lang=cpp
 * @lcpr version=30113
 *
 * [628] 三个数的最大乘积
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
  int maximumProduct(vector<int> &nums) {
    sort(nums.begin(), nums.end());
    int sz = nums.size();
    return max(nums[0] * nums[1] * nums[sz - 1],
               nums[sz - 3] * nums[sz - 2] * nums[sz - 1]);
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4]\n
// @lcpr case=end

// @lcpr case=start
// [-1,-2,-3]\n
// @lcpr case=end

 */
