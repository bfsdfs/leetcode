/*
 * @lc app=leetcode.cn id=145 lang=cpp
 * @lcpr version=30113
 *
 * [145] 二叉树的后序遍历
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
  vector<int> postorderTraversal(TreeNode *root) {
    traverse(root);
    return res;
  }

  void traverse(TreeNode *root) {
    if (root == nullptr) {
      return;
    }
    traverse(root->left);
    traverse(root->right);
    res.push_back(root->val);
    return;
  }
};

class Solution02 {
public:
  vector<int> postorderTraversal(TreeNode *root) {
    if (root == nullptr)
      return {};
    vector<int> res;
    stack<TreeNode *> st;
    st.push(root);
    while (!st.empty()) {
      TreeNode *cur = st.top();
      st.pop();
      res.push_back(cur->val);

      if (cur->left)
        st.push(cur->left);
      if (cur->right)
        st.push(cur->right);
    }
		reverse(res.begin(),res.end());
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

 */
