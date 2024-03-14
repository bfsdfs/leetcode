/*
 * @lc app=leetcode.cn id=101 lang=cpp
 * @lcpr version=30113
 *
 * [101] 对称二叉树
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
  bool res = true;
  bool isSymmetric(TreeNode *root) {
    if (root == nullptr)
      return true;
    return traverse(root->left, root->right);
  }
  bool traverse(TreeNode *l, TreeNode *r) {
    if (l == nullptr && r == nullptr)
      return true;
    else if (l == nullptr || r == nullptr || l->val != r->val)
      return false;
    return traverse(l->left, r->right) && traverse(l->right, r->left);
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,2,3,4,4,3]\n
// @lcpr case=end

// @lcpr case=start
// [1,2,2,null,3,null,3]\n
// @lcpr case=end

 */
