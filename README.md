# Advanced-Cpp-Exercises

A small collection of educational C++ data-structures and helpers used for learning and exercises. The repo contains hand-crafted implementations of dynamic arrays, singly/doubly linked lists, queue/stack adapters (array- and list-backed), and a couple of applied examples (ticket queue, undo/redo stack).

---

## 📂 Contents / Important files

* `clsDblLinkedList.h` — Doubly linked list template (main list implementation used by list-based Queue/Stack).
* `clsMyDynamicArray.h` — Simple dynamic array template (vector-like operations: insert, delete, resize, reverse).
* `clsMyQueue.h` — Queue implemented using `clsDblLinkedList` (front/back/push/pop/print etc.).
* `clsMyStack.h` — Stack implemented as a small adapter over `clsMyQueue` / `clsDblLinkedList`.
* `clsMyQueueArr.h` — Queue implemented using `clsMyDynamicArray`.
* `clsMyStackArr.h` — Stack implemented using `clsMyQueueArr` / dynamic array.
* `clsQueueLine.h` — Example application: ticketing queue using `std::queue` and a small ticket class.
* `clsUndoAndRedo.h` — Small undo/redo helper using `std::stack`.
* `*.cpp` files — example mains and test code used during development.

---

## ✏️ Goals

This repository is a learning-focused collection intended to:

* Provide simple, clear, hand-written implementations of basic data structures.
* Serve as exercises for building, debugging and improving C++ code in Visual Studio.
* Show trade-offs (e.g. array-backed vs list-backed queues, complexity differences).

---

## 📝 Quick API summary

### `clsDblLinkedList<type>`

* `InsertAtBeginning(const type& value)`
* `InsertAtEnd(const type& value)`
* `InsertAfter(node* prevNode, const type& value)`
* `DeleteFirstNode()` / `DeleteLastNode()`
* `DeleteNode(node* target)`
* `GetNode(int index)` / `GetItem(int index)`
* `reverse()`
* `size()`, `isEmpty()`, `clear()`


### `clsMyDynamicArray<type>`

* `SetItem(int index, const type& value)` — write to index
* `GetItem(int index)` — read item (no range-guard in some versions; prefer the calling pattern that checks size)
* `InsertAt(int index, const type& value)` — inserts and resizes (~O(n))
* `InsertAtEnd`, `InsertAtBeginning`, `InsertAfter`, `InsertBefore` — convenience wrappers
* `DeleteItemAt(int index)`, `DeleteFirstItem()`, `DeleteLastItem()` — remove and shift elements (~O(n))
* `resize(int newSize)` — resize the underlying array safely
* `reverse()` — in-place reverse (O(n))
* `clear()` — free memory and set size to 0

### `clsMyQueue<type>` (list-backed)

* `push(const type& value)` — enqueue at back (calls `InsertAtEnd`) — O(n) if no tail
* `pop()` — dequeue and return front value — O(1)
* `front()`, `back()` — inspect ends — O(1) for front, O(n) for back if no tail
* `size()`, `IsEmpty()`, `print()`

### `clsMyStack<type>` (list-backed adapter)

* `push(const type& value)` — push to top (implemented as `InsertAtBeginning`)
* `pop()` — remove and return top
* `top()`, `bottom()` — accessors
* `print()` — shows stack from top to bottom

### Array-backed queue/stack (`clsMyQueueArr`, `clsMyStackArr`)

* Similar public API but backed by `clsMyDynamicArray` — push/insert/pop operations typically O(n) due to shifting, unless optimized.

---

## 🖋️ Example usage

```cpp
// Dynamic array example
clsMyDynamicArray<int> arr(5);
arr.SetItem(0, 10);
arr.SetItem(1, 20);
arr.SetItem(2, 30);
arr.reverse(); // now [30,20,10,...]

// Queue example (list-backed)
clsMyQueue<int> q;
q.push(10);
q.push(20);
q.push(30);
cout << q.front(); // 10
q.pop();

// Stack example (list-backed)
clsMyStack<int> s;
s.push(1);
s.push(2);
cout << s.top(); // 2
s.pop();
```

---

## 🛠️ Build & run (Visual Studio Community)

1. Open the solution or create a new `Empty Project` and add the `.cpp` example files and headers.
2. Make sure each `.cpp` includes the correct header paths.
3. Build in Debug x64 or x86 as you prefer.
4. Run the example `main.cpp` files to test each data structure.

**Tip:** If you add new branches and push from the CLI, use `git push -u origin <branch>` the first time to set upstream. Use descriptive commits (see below).

---

## ⚡ Performance Notes

This repository is implemented using basic data-structure operations without advanced optimizations.  
Below is a quick overview of the time complexity of the most important operations:

- **Dynamic Array**
  - InsertAt / DeleteAt → O(n)
  - GetItem → O(1)

- **Linked List**
  - InsertAtBeginning / DeleteFirstNode → O(1)
  - InsertAtEnd (no tail pointer) → O(n)

- **Queue (based on linked list)**
  - push → O(n)
  - pop → O(1)

---

## 🧩 Contribution & commit messages

* Follow feature branches: `feature/<name>`.
* Example commit message for the recent change (moving files out of a subfolder):

```
Moved all files from the inner folder to the parent directory and removed the now-empty folder.
```

* For new features, use: `feature: add <feature-name>`
* For fixes: `fix: <short description>`

When pushing a new local branch to GitHub for the first time use:

```bash
git push -u origin feature/your-branch-name
```

---

## ⚠️ Known limitations & TODOs

* `clsDblLinkedList::InsertAtEnd` is O(n) — consider adding a `tail` pointer to make it O(1).
* `clsMyDynamicArray` is a minimal vector-like container — consider adding capacity/growth strategy to avoid frequent allocations.
* Add unit tests for edge-cases and exceptions.

---

## 📝 License

This repo is intended for learning. If you want to re-use code, prefer to credit the author. Add an appropriate license file (e.g. MIT) if you want to make it reusable.

---

## 📫 Contact

* **Telegram**: [@Mohamed_Ragheb0](https://t.me/Mohamed_Ragheb0)
* **Email**: [mohamedraghebomer@gmail.com](mailto:mohamedraghebomer@gmail.com)

---
