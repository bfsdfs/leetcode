/*
 * @lc app=leetcode.cn id=404 lang=cpp
 * @lcpr version=30113
 *
 * [404] 左叶子之和
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
  int res = 0;
  int sumOfLeftLeaves(TreeNode *root) {
    if (root == nullptr)
      return res;
    traverse(root->left, true);
    traverse(root->right, false);
    return res;
  }

  void traverse(TreeNode *root, bool isLeft) {
    if (root == nullptr)
      return;
    if (root->left == nullptr && root->right == nullptr && isLeft)
      res += root->val;
    traverse(root->left, true);
    traverse(root->right, false);
    return;
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

 */
