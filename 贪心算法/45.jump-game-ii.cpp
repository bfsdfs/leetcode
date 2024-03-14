// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=45 lang=cpp
 * @lcpr version=30113
 *
 * [45] 跳跃游戏 II
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
  int jump(vector<int> &nums) {
    int curDistance = 0;  // 当前覆盖的最远距离下标
    int ans = 0;          // 记录走的最大步数
    int nextDistance = 0; // 下一步覆盖的最远距离下标
    for (int i = 0; i < nums.size() - 1;
         i++) { // 注意这里是小于nums.size() - 1，这是关键所在
      nextDistance =
          max(nums[i] + i, nextDistance); // 更新下一步覆盖的最远距离下标
      if (i == curDistance) {       // 遇到当前覆盖的最远距离下标
        curDistance = nextDistance; // 更新当前覆盖的最远距离下标
        ans++;
      }
    }
    return ans;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [2,3,1,1,4]\n
// @lcpr case=end

// @lcpr case=start
// [2,3,0,1,4]\n
// @lcpr case=end

 */
