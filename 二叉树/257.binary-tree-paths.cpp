/*
 * @lc app=leetcode.cn id=257 lang=cpp
 * @lcpr version=30113
 *
 * [257] 二叉树的所有路径
 */

// @lcpr-template-start
#include <string>
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
  vector<string> res;
  vector<string> binaryTreePaths(TreeNode *root) {
    if (root == nullptr)
      return {};
    traverse(root, "");
    return res;
  }

  void traverse(TreeNode *root, string path) {
    path += to_string(root->val);
    if (root->left == nullptr && root->right == nullptr) {
      res.push_back(path);
      return;
    }

    if (root->left)
      traverse(root->left, path + "->");

    if (root->right)
      traverse(root->right, path + "->");

    return;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3,null,5]\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */
