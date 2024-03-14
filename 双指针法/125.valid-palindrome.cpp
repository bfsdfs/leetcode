/*
 * @lc app=leetcode.cn id=125 lang=cpp
 * @lcpr version=30113
 *
 * [125] 验证回文串
 */

// @lcpr-template-start
#include <cctype>
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
  bool isPalindrome(string s) {
    string ss;
    for (char ch : s) {
      if (isalnum(ch))
        ss += tolower(ch);
    }

    int l = 0;
    int r = ss.size() - 1;
    while (l < r) {
      if (ss[l++] != ss[r--]) {
        return false;
      }
    }
    return true;
  }
};
// @lc code=end

/*
// @lcpr case=start
// "A man, a plan, a canal: Panama"\n
// @lcpr case=end

// @lcpr case=start
// "race a car"\n
// @lcpr case=end

// @lcpr case=start
// " "\n
// @lcpr case=end

 */
