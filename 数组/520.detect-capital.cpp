// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=520 lang=cpp
 * @lcpr version=30113
 *
 * [520] 检测大写字母
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
  bool detectCapitalUse(string word) {
    int sz = word.size();
    if (sz == 1)
      return true;
    int flag = isupper(word[0]);
    int pre = flag == 0 ? flag : isupper(word[1]);
    for (int i = 1; i < sz; i++) {
      if (isupper(word[i]) != pre) {
        return false;
      }
    }
    return true;
  }
};
// @lc code=end

/*
// @lcpr case=start
// "USA"\n
// @lcpr case=end

// @lcpr case=start
// "FlaG"\n
// @lcpr case=end

 */
