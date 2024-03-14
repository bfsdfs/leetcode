/*
 * @lc app=leetcode.cn id=179 lang=cpp
 * @lcpr version=30113
 *
 * [179] 最大数
 */

// @lcpr-template-start
#include <sstream>
#include <string>
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
  string largestNumber(vector<int> &nums) {
    auto cmp = [](int lhs, int rhs) {
      return to_string(rhs) + to_string(lhs) < to_string(lhs) + to_string(rhs);
    };
    sort(nums.begin(), nums.end(), cmp);
    if (nums[0] == 0)
      return "0";
    stringstream ss;
    for (auto num : nums) {
      ss << to_string(num);
    }
    string res = ss.str();
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [10,2]\n
// @lcpr case=end

// @lcpr case=start
// [3,30,34,5,9]\n
// @lcpr case=end

 */
