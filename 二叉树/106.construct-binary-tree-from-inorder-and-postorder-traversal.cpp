// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=106 lang=cpp
 * @lcpr version=30113
 *
 * [106] 从中序与后序遍历序列构造二叉树
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
  TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
    return build(inorder, postorder, 0, inorder.size() - 1, 0,
                 postorder.size() - 1);
  }

  TreeNode *build(vector<int> &inorder, vector<int> &postorder, int s1, int e1,
                  int s2, int e2) {
    if (s1 > e1) {
      return nullptr;
    }
    TreeNode *cur = new TreeNode(postorder[e2]);
    if (s1 == e1)
      return cur;
    int rootIndex = s1;
    for (size_t i = s1; i <= e1; i++) {
      if (inorder[i] == postorder[e2]) {
        rootIndex = i;
        break;
      }
    }
    int leftLen = rootIndex - s1;
    int rightLen = e1 - rootIndex;
    // 构建左子树
    cur->left = build(inorder, postorder, s1, s1 + leftLen - 1,
                      s2 + leftLen - 1, e2 - rightLen - 1);
    // 构建右子树
    cur->right =
        build(inorder, postorder, rootIndex + 1, e1, e2 - rightLen, e2 - 1);
    return cur;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [9,3,15,20,7]\n[9,15,7,20,3]\n
// @lcpr case=end

// @lcpr case=start
// [-1]\n[-1]\n
// @lcpr case=end

 */
