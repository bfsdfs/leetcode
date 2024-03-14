/*
 * @lc app=leetcode.cn id=530 lang=cpp
 * @lcpr version=30113
 *
 * [530] 二叉搜索树的最小绝对差
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
  int res = INT_MAX;
  int pre = -100001;
  int getMinimumDifference(TreeNode *root) {
    traverse(root);
    return res;
  }

  void traverse(TreeNode *root) {
    if (root == nullptr) {
      return;
    }
    traverse(root->left);
    res = min(res, root->val - pre);
    pre = root->val;
    traverse(root->right);
  }
};
// @lc code=end

/*
// @lcpr case=start
// [4,2,6,1,3]\n
// @lcpr case=end

// @lcpr case=start
// [1,0,48,null,null,12,49]\n
// @lcpr case=end

 */
