/*
 * @lc app=leetcode.cn id=515 lang=cpp
 * @lcpr version=30113
 *
 * [515] 在每个树行中找最大值
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
  vector<int> largestValues(TreeNode *root) {
    if (root == nullptr)
      return {};
    vector<int> res;
    queue<TreeNode *> que;
    que.push(root);
    while (!que.empty()) {
      int sz = que.size();
      int val = INT_MIN;
      for (int i = 0; i < sz; ++i) {
        TreeNode *cur = que.front();
        que.pop();
        val = max(val, cur->val);
        if (cur->left)
          que.push(cur->left);
        if (cur->right)
          que.push(cur->right);
      }
      res.push_back(val);
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,3,2,5,3,null,9]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3]\n
// @lcpr case=end

 */
