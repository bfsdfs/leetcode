/*
 * @lc app=leetcode.cn id=623 lang=cpp
 * @lcpr version=30113
 *
 * [623] 在二叉树中增加一行
 */

// @lcpr-template-start
#include <optional>
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
  TreeNode *addOneRow(TreeNode *root, int val, int depth) {
    if (root && depth == 2) {
      root->left = new TreeNode(val, root->left, nullptr);
      root->right = new TreeNode(val, nullptr, root->right);
    }
    if (depth == 1) {
      return new TreeNode(val, root, nullptr);
    }
    if (root == nullptr)
      return nullptr;
    addOneRow(root->left, val, depth - 1);
    addOneRow(root->right, val, depth - 1);
    return root;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [4,2,6,3,1,5]\n1\n2\n
// @lcpr case=end

// @lcpr case=start
// [4,2,null,3,1]\n1\n3\n
// @lcpr case=end

 */
