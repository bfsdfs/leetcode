// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=376 lang=cpp
 * @lcpr version=30113
 *
 * [376] 摆动序列
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
  int wiggleMaxLength(vector<int> &nums) {
    if (nums.size() <= 1)
      return nums.size();
    int prediff = 0;
    int curdiff = 0;
    int res = 1;
    for (size_t i = 0; i < nums.size() - 1; i++) {
      curdiff = nums[i + 1] - nums[i];
      if ((curdiff < 0 && prediff >= 0) || (curdiff > 0 && prediff <= 0)) {
        res++;
        prediff = curdiff;
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,7,4,9,2,5]\n
// @lcpr case=end

// @lcpr case=start
// [1,17,5,10,13,15,10,5,16,8]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4,5,6,7,8,9]\n
// @lcpr case=end

 */
