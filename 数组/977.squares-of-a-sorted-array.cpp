/*
 * @lc app=leetcode.cn id=977 lang=cpp
 * @lcpr version=30113
 *
 * [977] 有序数组的平方
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
  vector<int> sortedSquares(vector<int> &nums) {
    int sz = nums.size();
    int l = 0;
    int r = sz - 1;
    vector<int> res(sz);
    int pos = sz - 1;
    while (l <= r) {
      if (abs(nums[l]) > abs(nums[r])) {
        res[pos--] = nums[l] * nums[l];
        l++;
      } else {
        res[pos--] = nums[r] * nums[r];
        r--;
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [-4,-1,0,3,10]\n
// @lcpr case=end

// @lcpr case=start
// [-7,-3,2,3,11]\n
// @lcpr case=end

 */
