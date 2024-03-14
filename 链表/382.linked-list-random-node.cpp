/*
 * @lc app=leetcode.cn id=382 lang=cpp
 * @lcpr version=30113
 *
 * [382] 链表随机节点
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
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  int _size = 0;
  ListNode *_head;
  Solution(ListNode *head) {
    _head = head;
    ListNode *cur = head;
    while (cur) {
      _size++;
      cur = cur->next;
    }
  }

  int getRandom() {
    ListNode *cur = _head;
    int var = rand() % _size;
    while (var-- > 0) {
      cur = cur->next;
    }
    return cur->val;
  }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(head);
 * int param_1 = obj->getRandom();
 */
// @lc code=end
