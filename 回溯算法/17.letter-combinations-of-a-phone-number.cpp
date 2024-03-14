/*
 * @lc app=leetcode.cn id=17 lang=cpp
 * @lcpr version=30113
 *
 * [17] 电话号码的字母组合
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
  vector<string> res;
  string path;
  vector<string> table{"abc", "def",  "ghi", "jkl",
                       "mno", "pqrs", "tuv", "wxyz"};
  vector<string> letterCombinations(string digits) {
    if (digits.size() == 0) {
      return {};
    }

    backtrace(digits, 0);
    return res;
  }

  void backtrace(const string &digits, int index) {
    if (index == digits.size()) {
      res.push_back(path);
      return;
    }
    for (auto &ch : table[digits[index] - '2']) {
      path.push_back(ch);
      backtrace(digits, index + 1);
      path.pop_back();
    }
    return;
  }
};
// @lc code=end

/*
// @lcpr case=start
// "23"\n
// @lcpr case=end

// @lcpr case=start
// ""\n
// @lcpr case=end

// @lcpr case=start
// "2"\n
// @lcpr case=end

 */
