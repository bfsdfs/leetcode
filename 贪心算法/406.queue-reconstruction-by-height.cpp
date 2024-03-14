/*
 * @lc app=leetcode.cn id=406 lang=cpp
 * @lcpr version=30113
 *
 * [406] 根据身高重建队列
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
  vector<vector<int>> reconstructQueue(vector<vector<int>> &people) {
    list<vector<int>> res;
    // 定义排序函数
    auto cmp = [](const vector<int> &lhs, const vector<int> &rhs) {
      return lhs[0] == rhs[0] ? lhs[1] < rhs[1] : lhs[0] > rhs[0];
    };

    sort(people.begin(), people.end(), cmp);

    for (auto &vec : people) {
      auto it = res.begin();
      int pos = vec[1];
      while (pos--)
        it++;
      res.insert(it, vec);
    }
    return vector<vector<int>>(res.begin(), res.end());
  }
};
// @lc code=end

/*
// @lcpr case=start
// [[7,0],[4,4],[7,1],[5,0],[6,1],[5,2]]\n
// @lcpr case=end

// @lcpr case=start
// [[6,0],[5,0],[4,0],[3,2],[2,2],[1,4]]\n
// @lcpr case=end

 */
