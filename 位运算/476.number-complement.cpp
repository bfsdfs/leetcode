/*
 * @lc app=leetcode.cn id=476 lang=cpp
 * @lcpr version=30113
 *
 * [476] 数字的补数
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
  unsigned int findComplement(int num) {
    long res = 2;
    while (res <= num) {
      res *= 2;
    }
    return res - num - 1;
  }
};
// @lc code=end

/*
// @lcpr case=start
// 5\n
// @lcpr case=end

// @lcpr case=start
// 1\n
// @lcpr case=end

 */
