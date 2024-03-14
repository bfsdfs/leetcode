/*
 * @lc app=leetcode.cn id=150 lang=cpp
 * @lcpr version=30113
 *
 * [150] 逆波兰表达式求值
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
  int evalRPN(vector<string> &tokens) {
    stack<long long> st;
    for (auto &str : tokens) {
      if (str == "+" || str == "-" || str == "*" || str == "/") {
        long long num1 = st.top();
        st.pop();
        long long num2 = st.top();
        st.pop();
        if (str == "+")
          st.push(num2 + num1);
        else if (str == "-")
          st.push(num2 - num1);
        else if (str == "*")
          st.push(num2 * num1);
        else if (str == "/")
          st.push(num2 / num1);
      } else {
        st.push(stoll(str));
      }
    }
    return st.top();
  }
};
// @lc code=end

/*
// @lcpr case=start
// ["2","1","+","3","*"]\n
// @lcpr case=end

// @lcpr case=start
// ["4","13","5","/","+"]\n
// @lcpr case=end

// @lcpr case=start
// ["10","6","9","3","+","-11","*","/","*","17","+","5","+"]\n
// @lcpr case=end

 */
