/*
 * @lc app=leetcode.cn id=654 lang=cpp
 * @lcpr version=30113
 *
 * [654] 最大二叉树
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
  TreeNode *constructMaximumBinaryTree(vector<int> &nums) {
    return build(nums, 0, nums.size() - 1);
  }

  TreeNode *build(vector<int> &nums, int s1, int e1) {
    if (s1 > e1) {
      return nullptr;
    }
    int idx = s1;
    for (int i = s1; i <= e1; i++) {
      if (nums[i] > nums[idx]) {
        idx = i;
      }
    }
    TreeNode *cur = new TreeNode(nums[idx]);
    cur->left = build(nums, s1, idx - 1);
    cur->right = build(nums, idx + 1, e1);
    return cur;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [3,2,1,6,0,5]\n
// @lcpr case=end

// @lcpr case=start
// [3,2,1]\n
// @lcpr case=end

 */
