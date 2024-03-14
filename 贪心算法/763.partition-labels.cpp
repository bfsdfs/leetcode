/*
 * @lc app=leetcode.cn id=763 lang=cpp
 * @lcpr version=30113
 *
 * [763] 划分字母区间
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
  vector<int> partitionLabels(string s) {
    vector<int> res;
    int table[26]{0};
    for (int i = 0; i < s.size(); ++i) {
      table[s[i] - 'a'] = i;
    }
    int start = -1;
    int end = 0;
    for (int i = 0; i < s.size(); ++i) {
      end = max(end, table[s[i] - 'a']);
      if (i == end) {
        res.push_back(end - start);
        start = i;
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// "ababcbacadefegdehijhklij"\n
// @lcpr case=end

// @lcpr case=start
// "eccbbbbdec"\n
// @lcpr case=end

 */
