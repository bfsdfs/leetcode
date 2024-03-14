/*
 * @lc app=leetcode.cn id=20 lang=cpp
 * @lcpr version=30113
 *
 * [20] 有效的括号
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
  bool isValid(string s) {
    std::stack<char> st;
    for (auto ch : s) {
      if (ch == '{' || ch == '(' || ch == '[') {
        st.push(ch);
      } else {
        if (st.empty())
          return false;
        char top = st.top();
        if ((ch == ']' && top == '[') || (ch == '}' && top == '{') ||
            (ch == ')' && top == '(')) {
          st.pop();
        } else {
          return false;
        }
      }
    }
    return st.empty();
  }
};
// @lc code=end

/*
// @lcpr case=start
// "()"\n
// @lcpr case=end

// @lcpr case=start
// "()[]{}"\n
// @lcpr case=end

// @lcpr case=start
// "(]"\n
// @lcpr case=end

 */
