/*
 * @lc app=leetcode.cn id=202 lang=cpp
 * @lcpr version=30113
 *
 * [202] 快乐数
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
  bool isHappy(int n) {
    std::unordered_set<int> set;
    int lastSum = n;
    int sum = 0;
    while (lastSum != 1) {
      sum = 0;
      while (lastSum) {
        int temp = lastSum % 10;
        lastSum = lastSum / 10;
        sum += temp * temp;
      }
      if (set.find(sum) == set.end()) {
        set.insert(sum);
      } else {
        return false;
      }
      lastSum = sum;
    }
    return true;
  }
};
// @lc code=end

/*
// @lcpr case=start
// 19\n
// @lcpr case=end

// @lcpr case=start
// 2\n
// @lcpr case=end

 */
