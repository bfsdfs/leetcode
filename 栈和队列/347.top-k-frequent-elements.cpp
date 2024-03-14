/*
 * @lc app=leetcode.cn id=347 lang=cpp
 * @lcpr version=30113
 *
 * [347] 前 K 个高频元素
 */

// @lcpr-template-start
using namespace std;
#include <queue>
#include <unordered_map>
#include <utility>
#include <vector>
// @lcpr-template-end
// @lc code=start
class Solution {
public:
  vector<int> topKFrequent(vector<int> &nums, int k) {
    unordered_map<int, int> map;
    for (auto temp : nums) {
      map[temp]++;
    }

    auto cmp = [](const pair<int, int> &lhs, const pair<int, int> &rhs) {
      return lhs.second > rhs.second;
    };

    priority_queue<pair<int, int>, vector<pair<int, int>>, decltype(cmp)> que(
        cmp);

    for (auto &p : map) {
      que.push(p);
      if (que.size() > k)
        que.pop();
    }

    vector<int> result(k);
    for (int i = k - 1; i >= 0; i--) {
      result[i] = que.top().first;
      que.pop();
    }
    return result;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,1,1,2,2,3]\n2\n
// @lcpr case=end

// @lcpr case=start
// [1]\n1\n
// @lcpr case=end

 */
