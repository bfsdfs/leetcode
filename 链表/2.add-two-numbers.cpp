// @lcpr-before-debug-begin

// @lcpr-before-debug-end

/*
 * @lc app=leetcode.cn id=2 lang=cpp
 * @lcpr version=30113
 *
 * [2] 两数相加
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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *cur1 = l1;
    ListNode *cur2 = l2;
    int flag = 0;
    ListNode *pre = new ListNode(0, l1);
    while (cur1 && cur2) {
      int temp = cur1->val + cur2->val + flag;
      flag = temp / 10;
      temp = temp % 10;
      cur1->val = temp;
      cur1 = cur1->next;
      cur2 = cur2->next;
      pre = pre->next;
    }
    pre->next = cur1 ? cur1 : cur2;
    while (pre->next) {
      int temp = pre->next->val + flag;
      flag = temp / 10;
      temp = temp % 10;
      pre->next->val = temp;
      pre = pre->next;
    }
    if (flag == 1)
      pre->next = new ListNode(1);
    return l1;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [2,4,3]\n[5,6,4]\n
// @lcpr case=end

// @lcpr case=start
// [0]\n[0]\n
// @lcpr case=end

// @lcpr case=start
// [9,9,9,9,9,9,9]\n[9,9,9,9]\n
// @lcpr case=end

 */
