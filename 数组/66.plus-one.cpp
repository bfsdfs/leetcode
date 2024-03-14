/*
 * @lc app=leetcode.cn id=66 lang=cpp
 * @lcpr version=30113
 *
 * [66] 加一
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
  vector<int> plusOne(vector<int> &digits) {
    int flag = 1;
    int idx = digits.size() - 1;
    while (idx >= 0 && flag > 0) {
      int temp = digits[idx] + flag;
      digits[idx--] = temp % 10;
      flag = temp / 10;
    }
    if (flag == 1)
      digits.insert(digits.begin(), 1);
    return digits;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

// @lcpr case=start
// [4,3,2,1]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n
// @lcpr case=end

 */
