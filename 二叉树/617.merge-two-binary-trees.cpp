// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=617 lang=cpp
 * @lcpr version=30113
 *
 * [617] 合并二叉树
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
  TreeNode *mergeTrees(TreeNode *r1, TreeNode *r2) {
    if (r1 == nullptr)
      return r2;
    if (r2 == nullptr)
      return r1;
    r1->val += r2->val;
    r1->left = mergeTrees(r1->left, r2->left);
    r1->right = mergeTrees(r1->right, r2->right);
    return r1;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,3,2,5]\n[2,1,3,null,4,null,7]\n
// @lcpr case=end

// @lcpr case=start
// [1]\n[1,2]\n
// @lcpr case=end

 */
