// @lcpr-before-debug-begin




// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=509 lang=cpp
 * @lcpr version=30113
 *
 * [509] 斐波那契数
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
  int fib(int n) {
    if (n == 0 || n == 1)
      return n;
    int pre = 0;
    int cur = 1;
    for (size_t i = 2; i <= n; i++) {
      int temp = pre + cur;
      pre = cur;
      cur = temp;
    }
    return cur;
  }
};
// @lc code=end

/*
// @lcpr case=start
// 2\n
// @lcpr case=end

// @lcpr case=start
// 3\n
// @lcpr case=end

// @lcpr case=start
// 4\n
// @lcpr case=end

 */
