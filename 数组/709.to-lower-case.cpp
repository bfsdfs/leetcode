/*
 * @lc app=leetcode.cn id=709 lang=cpp
 * @lcpr version=30113
 *
 * [709] 转换成小写字母
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
  string toLowerCase(string s) {
    for (auto &ch : s) {
      ch = tolower(ch);
    }
    return s;
  }
};
// @lc code=end

/*
// @lcpr case=start
// "Hello"\n
// @lcpr case=end

// @lcpr case=start
// "here"\n
// @lcpr case=end

// @lcpr case=start
// "LOVELY"\n
// @lcpr case=end

 */
