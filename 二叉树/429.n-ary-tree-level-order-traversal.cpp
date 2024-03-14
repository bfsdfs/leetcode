/*
 * @lc app=leetcode.cn id=429 lang=cpp
 * @lcpr version=30113
 *
 * [429] N 叉树的层序遍历
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
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
  vector<vector<int>> levelOrder(Node *root) {
    if (root == nullptr)
      return {};
    vector<vector<int>> res;
    queue<Node *> que;
    que.push(root);
    while (!que.empty()) {
      int sz = que.size();
      vector<int> vec;
      for (int i = 0; i < sz; ++i) {
        Node *cur = que.front();
        que.pop();
        vec.push_back(cur->val);
        for (auto &temp : cur->children) {
          if (temp)
            que.push(temp);
        }
      }
      res.push_back(vec);
    }
    return res;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,null,3,2,4,null,5,6]\n
// @lcpr case=end

// @lcpr case=start
//
[1,null,2,3,4,5,null,null,6,7,null,8,null,9,10,null,null,11,null,12,null,13,null,null,14]\n
// @lcpr case=end

 */
