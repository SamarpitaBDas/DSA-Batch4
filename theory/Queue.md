
# 🧠 Queue (C++ Version)

A **Queue** is a **FIFO (First In First Out)** data structure.

👉 First element inserted → First element removed
👉 Like a line at a ticket counter

---

## 🔹 Basic Operations (C++ vs Java Thinking)

| Concept | Java                  | C++ Equivalent |
| ------- | --------------------- | -------------- |
| Insert  | `add()` / `offer()`   | `push()`       |
| Remove  | `remove()` / `poll()` | `pop()`        |
| Peek    | `peek()`              | `front()`      |
| Size    | `size()`              | `size()`       |
| Empty   | `isEmpty()`           | `empty()`      |

---

## 🔹 C++ STL Queue Syntax

```cpp
#include <iostream>
#include <queue>
using namespace std;

int main() {
    queue<int> q;

    // Insert
    q.push(10);
    q.push(20);
    q.push(30);

    // Access front
    cout << q.front() << endl;  // 10

    // Remove
    q.pop();  // removes 10

    cout << q.front() << endl;  // 20

    return 0;
}
```

---

## 🔹 Important Differences from Java

### 1. ❗ No `offer()` vs `add()` distinction

* C++ `push()` does **NOT return anything**
* If memory fails → program may throw exception (rare in interviews)

👉 So:

* Java → safer methods (`offer`)
* C++ → simpler (`push` only)

---

### 2. ❗ No direct `poll()`

* Java `poll()` → returns element + removes
* C++:

```cpp
int x = q.front();
q.pop();
```

---

### 3. ❗ No direct `peek()`

* Use:

```cpp
q.front();   // first element
q.back();    // last element
```

---

## 🔹 Under the Hood (IMPORTANT for interviews)

By default:

```cpp
queue<int> q;
```

👉 Implemented using **deque (double-ended queue)**

You can also do:

```cpp
queue<int, list<int>> q;
```

---

## 🔹 Time Complexity

| Operation | Complexity |
| --------- | ---------- |
| push      | O(1)       |
| pop       | O(1)       |
| front     | O(1)       |

---

# 🔥 Types of Queues (VERY IMPORTANT for Interviews)

---

## 1. Simple Queue

👉 FIFO (normal queue)

---

## 2. 🔁 Circular Queue

* Avoids memory waste
* Used in buffers, scheduling

---

## 3. ⚡ Priority Queue (VERY ASKED)

```cpp
#include <queue>

priority_queue<int> pq;  // max heap
pq.push(10);
pq.push(5);
pq.push(20);

cout << pq.top();  // 20
```

👉 Min heap:

```cpp
priority_queue<int, vector<int>, greater<int>> pq;
```

---

## 4. 🧵 Deque (Double Ended Queue)

```cpp
deque<int> dq;

dq.push_front(10);
dq.push_back(20);

dq.pop_front();
dq.pop_back();
```

---

# 🔥 Interview Tips (Super Important)

### ✅ 1. Queue is used in:

* BFS (graphs & trees)
* Sliding window problems
* Level order traversal

---

### ✅ 2. Common Problems

* Implement queue using stack
* First non-repeating character
* LRU Cache (deque + map)
* Rotten oranges (BFS)

---

### ✅ 3. Trick Question

👉 "Can you iterate queue?"

❌ No direct iterator in `queue`

👉 Trick:

```cpp
while(!q.empty()) {
    cout << q.front();
    q.pop();
}
```

---

### ✅ 4. When to use what?

| Situation          | Use            |
| ------------------ | -------------- |
| FIFO               | queue          |
| Need max/min fast  | priority_queue |
| Push/pop both ends | deque          |

---

# 🔥 Bonus: Implement Queue using Array

```cpp
class Queue {
    int arr[100], front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    void push(int x) {
        if (rear == 99) return;
        if (front == -1) front = 0;
        arr[++rear] = x;
    }

    void pop() {
        if (front == -1 || front > rear) return;
        front++;
    }

    int peek() {
        return arr[front];
    }
};
```

