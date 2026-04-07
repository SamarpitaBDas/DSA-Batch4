# 🔗 Linked List (Theory in C++)

A **Linked List** is a **linear data structure** where elements (called *nodes*) are stored in **non-contiguous memory locations**. Each node contains:

* **Data** (value)
* **Pointer** (address of the next node)

### 🧩 Basic Structure of a Node in C++

```cpp
struct Node {
    int data;
    Node* next;
};
```

---

# 📌 Types of Linked Lists

1. **Singly Linked List** → Each node points to the next node
2. **Doubly Linked List** → Each node has two pointers (prev & next)
3. **Circular Linked List** → Last node points back to the first

---

# ✅ Advantages of Linked List

### 1. Dynamic Size

* Size can grow or shrink during runtime
* No need to define size beforehand (unlike arrays)

### 2. Efficient Insertion & Deletion

* No shifting of elements required
* Faster than arrays for frequent insert/delete operations

### 3. Memory Utilization

* Memory is allocated only when needed (no wastage)

### 4. Easy Implementation of Complex Structures

* Used to build stacks, queues, graphs, etc.

---

# ❌ Disadvantages of Linked List

### 1. Extra Memory Usage

* Each node stores an extra pointer → more memory consumption

### 2. No Random Access

* Cannot directly access elements like arrays
* Must traverse from the head → slower access

### 3. Traversal is Slow

* Searching takes **O(n)** time

### 4. Complex Implementation

* Pointer handling makes it harder to understand and debug

### 5. Memory Fragmentation

* Nodes are scattered in memory → less cache-friendly

---

# ⚡ Example: Simple Linked List in C++

```cpp
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

int main() {
    Node* head = new Node();
    head->data = 10;
    head->next = NULL;

    Node* second = new Node();
    second->data = 20;
    second->next = NULL;

    head->next = second;

    // Traversal
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL";

    return 0;
}
```

---

# 📊 Quick Comparison (Array vs Linked List)

| Feature       | Array       | Linked List    |
| ------------- | ----------- | -------------- |
| Memory        | Contiguous  | Non-contiguous |
| Size          | Fixed       | Dynamic        |
| Access        | Fast (O(1)) | Slow (O(n))    |
| Insert/Delete | Costly      | Efficient      |

---
