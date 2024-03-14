/*
 * @lc app=leetcode.cn id=55 lang=cpp
 * @lcpr version=30113
 *
 * [55] 跳跃游戏
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
  bool canJump(vector<int> &nums) {
    int step = 1;
    int sz = nums.size();
    for (size_t i = 0; i < sz; i++) {
      step--;
      if (step < 0)
        return false;
      step = max(step, nums[i]);
    }
    return true;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [2,3,1,1,4]\n
// @lcpr case=end

// @lcpr case=start
// [3,2,1,0,4]\n
// @lcpr case=end

 */
