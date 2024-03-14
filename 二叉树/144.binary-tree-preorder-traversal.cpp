/*
 * @lc app=leetcode.cn id=144 lang=cpp
 * @lcpr version=30113
 *
 * [144] 二叉树的前序遍历
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
  vector<int> res;
  vector<int> preorderTraversal(TreeNode *root) {
    traverse(root);
    return res;
  }

  void traverse(TreeNode *root) {
    if (root == nullptr) {
      return;
    }
    res.push_back(root->val);
    traverse(root->left);
    traverse(root->right);
    return;
  }
};

class Solution02 {
public:
  vector<int> preorderTraversal(TreeNode *root) {
    if (root == nullptr)
      return {};
		
    vector<int> res;
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty()) {
      TreeNode *cur = st.top();
      st.pop();
      res.push_back(cur->val);
      if (cur->right)
        st.push(cur->right);
      if (cur->left)
        st.push(cur->left);
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,null,2,3]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

// @lcpr case=start
// [1,2]\n
// @lcpr case=end

// @lcpr case=start
// [1,null,2]\n
// @lcpr case=end

 */
