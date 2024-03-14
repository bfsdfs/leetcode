/*
 * @lc app=leetcode.cn id=107 lang=cpp
 * @lcpr version=30113
 *
 * [107] 二叉树的层序遍历 II
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
  vector<vector<int>> levelOrderBottom(TreeNode *root) {
    if (root == nullptr)
      return {};

    vector<vector<int>> res;
    queue<TreeNode *> que;
    que.push(root);
    while (!que.empty()) {
      int sz = que.size();
      vector<int> temp;
      for (int i = 0; i < sz; ++i) {
        TreeNode *cur = que.front();
        que.pop();
        temp.push_back(cur->val);
        if (cur->left)
          que.push(cur->left);
        if (cur->right)
          que.push(cur->right);
      }
      res.push_back(temp);
    }
    reverse(res.begin(), res.end());
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
