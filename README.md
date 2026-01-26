# 🚀 Advanced C++: Custom Data Structures & Technical Logic 

This repository marks a transition from basic Object-Oriented Programming (OOP) to **low-level Software Engineering**. It contains a hand-crafted library of fundamental Data Structures, implemented from scratch in C++, with a strong focus on memory efficiency, template-based design, and algorithmic optimization.
 
---
 
## 💎 Technical Highlights

What makes this repository "Advanced"?
* **Template-Based Design:** Every structure is generic, supporting any data type through C++ Templates.
* **Manual Memory Management:** Direct manipulation of heap memory using `new` and `delete`, ensuring zero memory leaks through careful destructor logic.
* **The Adapter Pattern:** Implementing Stacks and Queues by "adapting" existing structures like Linked Lists and Dynamic Arrays, demonstrating code reusability.
* **Algorithmic Rigor:** All operations are analyzed and documented based on their **Big O Notation** performance.

---

## 🛠 Implemented Structures & Complexity

I have implemented the following core components, ensuring each adheres to strict performance standards:

### 1. Doubly Linked List (`clsDblLinkedList`)
A robust bidirectional list allowing efficient navigation in both directions.
* **Logic:** Node-based architecture with `Next` and `Prev` pointers.
* **Advanced Features:** In-place list reversal, complex node deletion, and safe index-based access.



### 2. Custom Dynamic Array (`clsDynamicArray`)
A manual implementation of a vector-like structure.
* **Logic:** Handles raw array resizing, element shifting during insertion/deletion, and memory reallocation.
* **Optimization:** Includes methods for shrinking to fit and batch updates.

### 3. Stack & Queue (The Adapters)
Built as abstraction layers over the base structures.
* **`clsMyStack`**: LIFO logic (Last-In-First-Out).
* **`clsMyQueue`**: FIFO logic (First-In-First-Out).
* **`clsMyStackArr` / `clsMyQueueArr`**: Alternative implementations using arrays to compare performance trade-offs.

---

## 🛠 Features & Implementations

I have implemented the following data structures using pure C++ with a focus on **Object-Oriented Programming (OOP)** and **Memory Management**:
| Data Structure | Implementation Highlights | File Link |
| :--- | :--- | :--- |
| **Doubly Linked List** | Bidirectional traversal, custom node management. | [View](./clsDblLinkedList.h) |
| **Dynamic Array** | Auto-resizing, index-based access, and efficient insertions. | [View](./clsDynamicArray.h) |
| **Stack** | LIFO logic, built on top of my custom Linked List/Queue. | [View](./clsMyStack.h) |
| **Queue** | FIFO logic with optimized head/tail management. | [View](./clsMyQueue.h) |
| **Undo/Redo System** | Real-world application using Stack logic. | [View](./clsUndoAndRedo.h) |

---

## 📊 Performance Matrix

| Data Structure | Operation | Time Complexity | Efficiency Note |
| :--- | :--- | :--- | :--- |
| **Doubly Linked List** | `InsertAtBeginning` | $O(1)$ | Instant pointer update |
| **Doubly Linked List** | `Find / Search` | $O(n)$ | Linear traversal required |
| **Dynamic Array** | `Access [index]` | $O(1)$ | Direct memory offset |
| **Dynamic Array** | `Insert / Delete` | $O(n)$ | Due to element shifting |
| **Stack / Queue** | `Push / Pop` | $O(1)$ | Optimized via head/tail logic |

---

## 📂 Project Architecture

The project is organized to be used as a header-only library for easy integration:

```text
├── clsDblLinkedList.h      # Core Node-based Logic
├── clsDynamicArray.h       # Manual Heap-Array Management
├── clsMyStack.h            # Stack Adapter (Linked List based)
├── clsMyQueue.h            # Queue Adapter (Linked List based)
├── clsUndoAndRedo.h        # Real-world application of Stacks
└── main.cpp                # Comprehensive Test Suite
```
---

This project is designed as a learning-focused engineering exercise and a reusable reference for core data structure implementations in C++.
