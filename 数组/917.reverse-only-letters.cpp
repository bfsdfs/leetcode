/*
 * @lc app=leetcode.cn id=917 lang=cpp
 * @lcpr version=30113
 *
 * [917] 仅仅反转字母
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
  string reverseOnlyLetters(string s) {
    int l = 0;
    int r = s.size() - 1;
    while (l < r) {
      if (!isalpha(s[l]))
        l++;
      else if (!isalpha(s[r]))
        r--;
      else
        swap(s[l++], s[r--]);
    }
    return s;
  }
};
// @lc code=end

/*
// @lcpr case=start
// "ab-cd"\n
// @lcpr case=end

// @lcpr case=start
// "a-bC-dEf-ghIj"\n
// @lcpr case=end

// @lcpr case=start
// code-Q!"\n
// @lcpr case=end

 */
