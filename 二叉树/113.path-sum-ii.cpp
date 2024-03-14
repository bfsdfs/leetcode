/*
 * @lc app=leetcode.cn id=113 lang=cpp
 * @lcpr version=30113
 *
 * [113] 路径总和 II
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
  vector<vector<int>> res;
  vector<int> path;
  vector<vector<int>> pathSum(TreeNode *root, int target) {
    traverse(root, target);
    return res;
  }

  void traverse(TreeNode *root, int target) {
    if (root == nullptr)
      return;
    path.push_back(root->val);
    if (root->left == nullptr && root->right == nullptr &&
        target == root->val) {
      res.push_back(path);
    }
    traverse(root->left, target - root->val);
    traverse(root->right, target - root->val);
    path.pop_back();
    return;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [5,4,8,11,null,13,4,7,2,null,null,5,1]\n22\n
// @lcpr case=end

// @lcpr case=start
// [1,2,3]\n5\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n0\n
// @lcpr case=end

 */
