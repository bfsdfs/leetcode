/*
 * @lc app=leetcode.cn id=671 lang=cpp
 * @lcpr version=30113
 *
 * [671] 二叉树中第二小的节点
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
  long res = LONG_MAX;
  int findSecondMinimumValue(TreeNode *root) {
    traverse(root, root->val);
    return res == LONG_MAX ? -1 : res;
  }

  void traverse(TreeNode *root, int minV) {
    if (root == nullptr) {
      return;
    }
    if (root->val > minV) {
      res = min(res, (long)root->val);
      return;
    }
    traverse(root->left, minV);
    traverse(root->right, minV);
  }
};
// @lc code=end

/*
// @lcpr case=start
// [2,2,5,null,null,5,7]\n
// @lcpr case=end

// @lcpr case=start
// [2,2,2]\n
// @lcpr case=end

 */
