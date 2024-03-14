/*
 * @lc app=leetcode.cn id=24 lang=cpp
 * @lcpr version=30113
 *
 * [24] 两两交换链表中的节点
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
  ListNode *swapPairs(ListNode *head) {
    ListNode *dummy = new ListNode(0, head);
    ListNode *slow = dummy->next;
    ListNode *cur = dummy;
    while (slow) {
      if (slow->next != nullptr) {
        cur->next = slow->next;
        slow->next = slow->next->next;
        cur->next->next = slow;
        cur = slow;
        slow = slow->next;
      } else {
        slow = slow->next;
      }
    }
    return dummy->next;
  }
};
// @lc code=end

/*
// @lcpr case=start
// [1,2,3,4]\n
// @lcpr case=end

// @lcpr case=start
// []\n
// @lcpr case=end

// @lcpr case=start
// [1]\n
// @lcpr case=end

 */
