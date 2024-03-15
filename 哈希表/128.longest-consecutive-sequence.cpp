// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=128 lang=cpp
 * @lcpr version=30119
 *
 * [128] 最长连续序列
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
  int longestConsecutive(vector<int> &nums) {
    unordered_set<int> set(nums.begin(), nums.end());
    int res = 0;
    for (auto num : nums) {
      if (set.find(num - 1) == set.end()) {
        int tmp = 1;
        while (set.find(++num) != set.end()) {
          tmp++;
        }
        res = max(res, tmp);
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [100,4,200,1,3,2]\n
// @lcpr case=end

// @lcpr case=start
// [0,3,7,2,5,8,4,6,0,1]\n
// @lcpr case=end

 */
