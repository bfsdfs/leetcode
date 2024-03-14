/*
 * @lc app=leetcode.cn id=49 lang=cpp
 * @lcpr version=30113
 *
 * [49] 字母异位词分组
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
  vector<vector<string>> groupAnagrams(vector<string> &strs) {
    vector<vector<string>> res;
    unordered_map<string, vector<string>> map;
    for (size_t i = 0; i < strs.size(); i++) {
      string temp(strs[i]);
      sort(temp.begin(), temp.end());
      map[temp].push_back(strs[i]);
    }
    for (auto &it : map) {
      res.push_back(it.second);
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// ["eat", "tea", "tan", "ate", "nat", "bat"]\n
// @lcpr case=end

// @lcpr case=start
// [""]\n
// @lcpr case=end

// @lcpr case=start
// ["a"]\n
// @lcpr case=end

 */
