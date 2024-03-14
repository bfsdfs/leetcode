/*
 * @lc app=leetcode.cn id=513 lang=cpp
 * @lcpr version=30113
 *
 * [513] 找树左下角的值
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
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
  int findBottomLeftValue(TreeNode *root) {
    queue<TreeNode *> que;
    que.push(root);
    int res = root->val;
    while (!que.empty()) {
      int sz = que.size();
      for (size_t i = 0; i < sz; i++) {
        TreeNode *cur = que.front();
        que.pop();
        if (i == 0)
          res = cur->val;
        if (cur->left)
          que.push(cur->left);
        if (cur->right)
          que.push(cur->right);
      }
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [2,1,3]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3,4,null,5,6,null,null,7]\n
// @lcpr case=end

 */
