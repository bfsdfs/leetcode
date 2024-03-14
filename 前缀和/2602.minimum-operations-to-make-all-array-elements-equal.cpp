/*
 * @lc app=leetcode.cn id=2602 lang=cpp
 * @lcpr version=30119
 *
 * [2602] 使数组元素全部相等的最少操作次数
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
  vector<long long> minOperations(vector<int> &nums, vector<int> &queries) {
    sort(nums.begin(), nums.end());
    int n = nums.size();
    long long sum[n + 1]; // 前缀和
    sum[0] = 0;
    for (int i = 0; i < n; ++i)
      sum[i + 1] = sum[i] + nums[i];

    int m = queries.size();
    vector<long long> ans(m);
    for (int i = 0; i < m; ++i) {
      int q = queries[i];
      long long j = lower_bound(nums.begin(), nums.end(), q) - nums.begin();
      long long left = q * j - sum[j];                 // 蓝色面积
      long long right = sum[n] - sum[j] - q * (n - j); // 绿色面积
      ans[i] = left + right;
    }
    return ans;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [3,1,6,8]\n[1,5]\n
// @lcpr case=end

// @lcpr case=start
// [2,9,6,3]\n[10]\n
// @lcpr case=end

 */
