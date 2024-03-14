/*
 * @lc app=leetcode.cn id=105 lang=cpp
 * @lcpr version=30113
 *
 * [105] 从前序与中序遍历序列构造二叉树
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
  TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {

    return build(preorder, inorder, 0, preorder.size() - 1, 0,
                 inorder.size() - 1);
  }

  TreeNode *build(vector<int> &pre, vector<int> &in, int s1, int e1, int s2,
                  int e2) {
    if (s1 > e1) {
      return nullptr;
    }
    TreeNode *cur = new TreeNode(pre[s1]);
    if (s1 == e1) {
      return cur;
    }
    int rootIndex = s2;
    for (rootIndex = s2; rootIndex <= e2; ++rootIndex) {
      if (in[rootIndex] == pre[s1]) {
        break;
      }
    }
    int leftLen = rootIndex - s2;  // 1
    int rightLen = e2 - rootIndex; // 3

    cur->left = build(pre, in, s1 + 1, s1 + leftLen, s2, rootIndex - 1);
    cur->right = build(pre, in, e1 - rightLen + 1, e1, rootIndex + 1, e2);
    return cur;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [3,9,20,15,7]\n[9,3,15,20,7]\n
// @lcpr case=end

// @lcpr case=start
// [-1]\n[-1]\n
// @lcpr case=end

 */
