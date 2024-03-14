/*
 * @lc app=leetcode.cn id=103 lang=cpp
 * @lcpr version=30113
 *
 * [103] 二叉树的锯齿形层序遍历
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
  vector<vector<int>> zigzagLevelOrder(TreeNode *root) {
    if (root == nullptr) {
      return {};
    }
    vector<vector<int>> res;
    queue<TreeNode *> que;
    que.push(root);
    bool flag = false;
    while (!que.empty()) {
      int sz = que.size();
      vector<int> vec;
      for (size_t i = 0; i < sz; i++) {
        TreeNode *cur = que.front();
        que.pop();
        vec.push_back(cur->val);
        if (cur->left)
          que.push(cur->left);
        if (cur->right)
          que.push(cur->right);
      }
      if (flag)
        reverse(vec.begin(), vec.end());
      flag = !flag;
      res.push_back(vec);
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
// [1]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

 */
