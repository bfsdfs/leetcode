/*
 * @lc app=leetcode.cn id=9 lang=cpp
 * @lcpr version=30113
 *
 * [9] 回文数
 */

// @lcpr-template-start
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
  bool isPalindrome(int x) {
    if (x < 0)
      return false;
    string s = to_string(x);
    int sz = s.size();
    for (int i = 0; i < sz / 2 + 1; i++) {
      if (s[i] != s[sz - i - 1]) {
        return false;
      }
    }
    return true;
  }
};
// @lc code=end

/*
// @lcpr case=start
// 121\n
// @lcpr case=end

// @lcpr case=start
// -121\n
// @lcpr case=end

// @lcpr case=start
// 10\n
// @lcpr case=end

 */
