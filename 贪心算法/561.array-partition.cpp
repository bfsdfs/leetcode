/*
 * @lc app=leetcode.cn id=561 lang=cpp
 * @lcpr version=30113
 *
 * [561] 数组拆分
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
  int arrayPairSum(vector<int> &nums) {
    int sz = nums.size() / 2;
    sort(nums.begin(), nums.end());
    int res = 0;
    for (size_t i = 0; i < sz; i++) {
      res += nums[i * 2];
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,4,3,2]\n
// @lcpr case=end

// @lcpr case=start
// [6,2,6,5,1,2]\n
// @lcpr case=end

 */
