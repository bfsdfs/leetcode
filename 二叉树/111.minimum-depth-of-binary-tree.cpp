/*
 * @lc app=leetcode.cn id=111 lang=cpp
 * @lcpr version=30113
 *
 * [111] 二叉树的最小深度
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
  int minDepth(TreeNode *root) {
    if (!root)
      return 0;
    if (!root->left && !root->right)
      return 1;
    queue<TreeNode *> que;
    que.push(root);
    int res = 0;
    while (!que.empty()) {
      int sz = que.size();
      res++;
      for (int i = 0; i < sz; ++i) {
        TreeNode *cur = que.front();
        que.pop();
        if (!cur->left && !cur->right)
          return res;
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
// [3,9,20,null,null,15,7]\n
// @lcpr case=end

// @lcpr case=start
// [2,null,3,null,4,null,5,null,6]\n
// @lcpr case=end

 */
