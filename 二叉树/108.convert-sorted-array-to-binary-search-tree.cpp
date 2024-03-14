/*
 * @lc app=leetcode.cn id=108 lang=cpp
 * @lcpr version=30113
 *
 * [108] 将有序数组转换为二叉搜索树
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
  TreeNode *sortedArrayToBST(vector<int> &nums) {
    return build(nums, 0, nums.size() - 1);
  }

  TreeNode *build(vector<int> &nums, int start, int end) {
    if (start > end)
      return nullptr;
    int mid = start + (end - start) / 2;
    TreeNode *cur = new TreeNode(nums[mid]);
    cur->left = build(nums, start, mid - 1);
    cur->right = build(nums, mid + 1, end);
    return cur;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [-10,-3,0,5,9]\n
// @lcpr case=end

// @lcpr case=start
// [1,3]\n
// @lcpr case=end

 */
