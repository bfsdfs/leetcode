/*
 * @lc app=leetcode.cn id=707 lang=cpp
 * @lcpr version=30113
 *
 * [707] 设计链表
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
class MyLinkedList {
private:
  struct ListNode {
    ListNode *next;
    int val;
    ListNode(int val) : val(val), next(nullptr) {}
  } *_dummy;

  int _size = 0;

public:
  MyLinkedList() {
    _dummy = new ListNode(0);
    _size = 0;
  }

  int get(int index) {
    if (index > (_size - 1) || index < 0) {
      return -1;
    }
    ListNode *cur = _dummy->next;
    while (index--) {
      cur = cur->next;
    }
    return cur->val;
  }

  void addAtHead(int val) { addAtIndex(0, val); }

  void addAtTail(int val) { addAtIndex(_size, val); }

  void addAtIndex(int index, int val) {
    if (index > _size)
      return;
    if (index < 0)
      index = 0;

    ListNode *cur = _dummy;
    while (index--) {
      cur = cur->next;
    }
    ListNode *temp = new ListNode(val);
    temp->next = cur->next;
    cur->next = temp;
    _size++;
  }

  void deleteAtIndex(int index) {
    if (index >= _size || index < 0)
      return;

    ListNode *cur = _dummy;
    while (index--) {
      cur = cur->next;
    }
    ListNode *temp = cur->next;
    cur->next = temp->next;
    delete temp;
    _size--;
  }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */
// @lc code=end
