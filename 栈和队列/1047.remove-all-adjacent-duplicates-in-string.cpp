/*
 * @lc app=leetcode.cn id=1047 lang=cpp
 * @lcpr version=30113
 *
 * [1047] 删除字符串中的所有相邻重复项
 */

// @lcpr-template-start
#include <iterator>
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
  string removeDuplicates(string s) {
    string res;
    for (auto ch : s) {
      if (!res.empty() && res.back() == ch) {
        res.pop_back();
      } else {
        res.push_back(ch);
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// "abbaca"\n
// @lcpr case=end

 */
