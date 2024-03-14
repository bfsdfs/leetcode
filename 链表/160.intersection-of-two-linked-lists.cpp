/*
 * @lc app=leetcode.cn id=160 lang=cpp
 * @lcpr version=30113
 *
 * [160] 相交链表
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
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode *curA = headA;
    ListNode *curB = headB;
    int lenA = 0, lenB = 0;
    while (curA != nullptr) { // 求链表A的长度
      lenA++;
      curA = curA->next;
    }
    while (curB != nullptr) { // 求链表B的长度
      lenB++;
      curB = curB->next;
    }
    curA = headA;
    curB = headB;
    // 让curA为最长链表的头，lenA为其长度
    if (lenB > lenA) {
      swap(lenA, lenB);
      swap(curA, curB);
    }
    // 求长度差
    int gap = lenA - lenB;
    // 让curA和curB在同一起点上（末尾位置对齐）
    while (gap--) {
      curA = curA->next;
    }
    // 遍历curA 和 curB，遇到相同则直接返回
    while (curA != nullptr) {
      if (curA == curB) {
        return curA;
      }
      curA = curA->next;
      curB = curB->next;
    }
    return nullptr;
  }
};
// @lc code=end

/*
// @lcpr case=start
// 8\n[4,1,8,4,5]\n[5,6,1,8,4,5]\n2\n3\n
// @lcpr case=end

// @lcpr case=start
// 2\n[1,9,1,2,4]\n[3,2,4]\n3\n1\n
// @lcpr case=end

// @lcpr case=start
// 0\n[2,6,4]\n[1,5]\n3\n2\n
// @lcpr case=end

 */
