/*
 * @lc app=leetcode.cn id=622 lang=cpp
 * @lcpr version=30113
 *
 * [622] 设计循环队列
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
class MyCircularQueue {
private:
  int front;
  int rear;
  int capacity;
  vector<int> elements;

public:
  MyCircularQueue(int k) {
    this->capacity = k + 1;
    this->elements = vector<int>(capacity);
    rear = front = 0;
  }

  bool enQueue(int value) {
    if (isFull()) {
      return false;
    }
    elements[rear] = value;
    rear = (rear + 1) % capacity;
    return true;
  }

  bool deQueue() {
    if (isEmpty()) {
      return false;
    }
    front = (front + 1) % capacity;
    return true;
  }

  int Front() {
    if (isEmpty()) {
      return -1;
    }
    return elements[front];
  }

  int Rear() {
    if (isEmpty()) {
      return -1;
    }
    return elements[(rear - 1 + capacity) % capacity];
  }

  bool isEmpty() { return rear == front; }

  bool isFull() { return ((rear + 1) % capacity) == front; }
};
/**
 * Your MyCircularQueue object will be instantiated and called as such:
 * MyCircularQueue* obj = new MyCircularQueue(k);
 * bool param_1 = obj->enQueue(value);
 * bool param_2 = obj->deQueue();
 * int param_3 = obj->Front();
 * int param_4 = obj->Rear();
 * bool param_5 = obj->isEmpty();
 * bool param_6 = obj->isFull();
 */
// @lc code=end
