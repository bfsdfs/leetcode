/*
 * @lc app=leetcode.cn id=199 lang=cpp
 * @lcpr version=30113
 *
 * [199] 二叉树的右视图
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
  vector<int> rightSideView(TreeNode *root) {
    if (root == nullptr)
      return {};
    vector<int> res;
    queue<TreeNode *> que;
    que.push(root);
    while (!que.empty()) {
      int sz = que.size();
      for (int i = 1; i <= sz; ++i) {
        TreeNode *cur = que.front();
        que.pop();
        if (i == sz)
          res.push_back(cur->val);
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
// [1,2,3,null,5,null,4]\n
// @lcpr case=end

// @lcpr case=start
// [1,null,3]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

 */
