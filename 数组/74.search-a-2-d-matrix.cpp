/*
 * @lc app=leetcode.cn id=74 lang=cpp
 * @lcpr version=30113
 *
 * [74] 搜索二维矩阵
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
  bool searchMatrix(vector<vector<int>> &matrix, int target) {
    int m = 0;
    int n = matrix[0].size() - 1;
    while (m < matrix.size() && n >= 0) {
      if (matrix[m][n] > target)
        n--;
      else if (matrix[m][n] < target)
        m++;
      else
        return true;
    }
    return false;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [[1,3,5,7],[10,11,16,20],[23,30,34,60]]\n3\n
// @lcpr case=end

// @lcpr case=start
// [[1,3,5,7],[10,11,16,20],[23,30,34,60]]\n13\n
// @lcpr case=end

 */
