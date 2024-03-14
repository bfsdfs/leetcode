/*
 * @lc app=leetcode.cn id=450 lang=cpp
 * @lcpr version=30113
 *
 * [450] 删除二叉搜索树中的节点
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
  TreeNode *deleteNode(TreeNode *root, int key) {
    if (root == nullptr)
      return root;
    else if (root->val == key) {
      TreeNode *cur = root;
      TreeNode *res = root;
      if (!cur->right)
        return cur->left;
      cur = cur->right;
      while (cur->left) {
        cur = cur->left;
      }
      cur->left = res->left;
      // delete root;
      return res->right;
    }
    root->left = deleteNode(root->left, key);
    root->right = deleteNode(root->right, key);
    return root;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [5,3,6,2,4,null,7]\n3\n
// @lcpr case=end

// @lcpr case=start
// [5,3,6,2,4,null,7]\n0\n
// @lcpr case=end

// @lcpr case=start
// []\n0\n
// @lcpr case=end

 */
