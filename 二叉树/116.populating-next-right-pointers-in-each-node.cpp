/*
 * @lc app=leetcode.cn id=116 lang=cpp
 * @lcpr version=30113
 *
 * [116] 填充每个节点的下一个右侧节点指针
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
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
};
*/

class Solution {
public:
  Node *connect(Node *root) {
    if (root == nullptr)
      return {};
    queue<Node *> que;
    que.push(root);
    while (!que.empty()) {
      int sz = que.size();
      for (int i = 1; i <= sz; ++i) {
        Node *cur = que.front();
        que.pop();
        cur->next = (i == sz) ? nullptr : que.front();

        if (cur->left)
          que.push(cur->left);
        if (cur->right)
          que.push(cur->right);
      }
    }
    return root;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3,4,5,6,7]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

 */
