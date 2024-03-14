// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=508 lang=cpp
 * @lcpr version=30113
 *
 * [508] 出现次数最多的子树元素和
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
  unordered_map<int, int> map;
  vector<int> findFrequentTreeSum(TreeNode *root) {
    traverse(root);
    vector<pair<int, int>> res(map.begin(), map.end());
    sort(res.begin(), res.end(),
         [](auto &lhs, auto &rhs) { return lhs.second > rhs.second; });
    int times = res[0].second;
    vector<int> ans;
    for (auto &var : res) {
      if (var.second == times) {
        ans.push_back(var.first);
      } else {
        break;
      }
    }
    return ans;
  }

  int traverse(TreeNode *root) {
    if (root == nullptr)
      return 0;
    int sum = traverse(root->left) + traverse(root->right) + root->val;
    map[sum]++;
    return sum;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [5,2,-3]\n
// @lcpr case=end

// @lcpr case=start
// [5,2,-5]\n
// @lcpr case=end

 */
