/*
 * @lc app=leetcode.cn id=397 lang=cpp
 * @lcpr version=30113
 *
 * [397] 整数替换
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
  int integerReplacement(int n) {
    int res = 0;
    while (n != 1) {
      if (n % 2 == 0) {
        res++;
        n /= 2;
      } else if (n % 4 == 1) {
        n = n / 2;
        res += 2;
      } else {
        if (n == 3)
          n = 1;
        else
          n = n / 2 + 1;

        res += 2;
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// 8\n
// @lcpr case=end

// @lcpr case=start
// 7\n
// @lcpr case=end

// @lcpr case=start
// 4\n
// @lcpr case=end

 */
