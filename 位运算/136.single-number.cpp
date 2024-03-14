/*
 * @lc app=leetcode.cn id=136 lang=cpp
 * @lcpr version=30113
 *
 * [136] 只出现一次的数字
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
  int singleNumber(vector<int> &nums) {
    int res = nums[0];
    int sz = nums.size();
    for (int i = 1; i < sz; i++) {
      res = res ^ nums[i];
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [2,2,1]\n
// @lcpr case=end

// @lcpr case=start
// [4,1,2,1,2]\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */
