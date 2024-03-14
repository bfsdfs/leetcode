/*
 * @lc app=leetcode.cn id=1481 lang=cpp
 * @lcpr version=30113
 *
 * [1481] 不同整数的最少数目
 */

// @lcpr-template-start
#include <map>
#include <set>
#include <type_traits>
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
  int findLeastNumOfUniqueInts(vector<int> &arr, int k) {
    unordered_map<int, int> umap;
    for_each(arr.begin(), arr.end(), [&](int val) { ++umap[val]; });
    auto cmp = [&](const auto &lhs, const auto &rhs) {
      return lhs.second < rhs.second;
    };
    vector<pair<int, int>> freq(umap.begin(), umap.end());
    sort(freq.begin(), freq.end(), cmp);
    int res = freq.size();
    for (auto &it : freq) {
      if (it.second <= k) {
        k -= it.second;
        res--;
      } else {
        break;
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [5,5,4]\n1\n
// @lcpr case=end

// @lcpr case=start
// [4,3,1,1,3,3,2]\n3\n
// @lcpr case=end

 */
