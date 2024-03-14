/*
 * @lc app=leetcode.cn id=653 lang=cpp
 * @lcpr version=30113
 *
 * [653] 两数之和 IV - 输入二叉搜索树
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
  unordered_set<int> set;

  bool findTarget(TreeNode *root, int k) {
    if (root == nullptr) {
      return false;
    }
    if (set.count(k - root->val)) {
      return true;
    }
    set.insert(root->val);
    return findTarget(root->left, k) || findTarget(root->right, k);
  }
};
// @lc code=end

/*
// @lcpr case=start
// [5,3,6,2,4,null,7]\n9\n
// @lcpr case=end

// @lcpr case=start
// [5,3,6,2,4,null,7]\n28\n
// @lcpr case=end

 */
