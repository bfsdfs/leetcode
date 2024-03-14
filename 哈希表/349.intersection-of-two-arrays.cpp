/*
 * @lc app=leetcode.cn id=349 lang=cpp
 * @lcpr version=30113
 *
 * [349] 两个数组的交集
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
  vector<int> intersection(vector<int> &nums1, vector<int> &nums2) {
    std::unordered_set<int> res;
    std::unordered_set<int> set(nums1.begin(), nums1.end());
    for (auto temp : nums2) {
      if (set.find(temp) != set.end()) {
        res.insert(temp);
      }
    }
    return std::vector<int>(res.begin(), res.end());
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,2,1]\n[2,2]\n
// @lcpr case=end

// @lcpr case=start
// [4,9,5]\n[9,4,9,8,4]\n
// @lcpr case=end

 */
