# 🛠️ Custom Data Structures Library (C++)

A comprehensive, low-level **Data Structures Library** implemented entirely from scratch in **C++** using strict **Object-Oriented Programming (OOP)** templates. This project showcases deep fundamental knowledge of memory management, pointer manipulation, and resource optimization without relying on the C++ Standard Template Library (STL).

---

## ✨ Implemented Data Structures

* **🔗 Doubly Linked List (`clsDblLinkedList`):** Complete bidirectional sequential access structures, managing pointer allocations, node insertions, and target deletions safely.
* **📦 Dynamic Array (`clsDynamicArray`):** A custom, re-sizable vector-like container featuring dynamic heap-memory reallocations, item indexing, and automatic capacity resizing.
* **🥞 Stack (`clsMyStack`):** A Last-In, First-Out (**LIFO**) structural container built entirely on top of custom underlying data utilities.
* **⏳ Queue (List-Based) (`clsMyQueue`):** A First-In, First-Out (**FIFO**) pipeline structure utilizing the custom Doubly Linked List for optimal $O(1)$ push/pop node operations.
* **🔢 Queue (Array-Based) (`clsMyQueueArr`):** A memory-optimized variation of the FIFO layout utilizing a contiguous dynamic array to track linear processing loops.
* **🚶‍♂️ Queue Line Simulation (`clsQueueLine`):** A real-world practical use-case simulation managing service lines, ticketing counters, and waiting time tracks utilizing custom queues.

---

## 📂 Key Technical Concepts Explored

* **Memory Management:** Direct control over heap resource allocation/deallocation (`new` and `delete` operations) preventing dangerous leaks.
* **Generics & Generic Programming:** Designed to support universal primitive or custom object data types via C++ Templates.
* **Pointer Arithmetic:** Manual reference mapping and node reconstruction during critical sorting, parsing, or reversing tasks.

---

## 📂 Repository File Blueprint

* `clsDblLinkedList.h`: Pointer nodes, forward/backward linking logic.
* `clsDynamicArray.h`: Dynamic element shifting, size scaling, and search routines.
* `clsMyQueue.h` & `clsMyQueueArr.h`: Comparing node-linked queues with contiguous collection indexing arrays.
* `clsMyStack.h`: Encapsulating dynamic arrays/lists to enforce top-node access criteria.
* `clsQueueLine.h`: Real-world implementation mapping line numbers, estimated serving periods, and visual queues.
* `clsMyString.h` & `clsDate.h` & `clsString.h` & `clsUtil.h`: Structural utility wrappers for core processing data elements.

---

## 🚀 How to Include and Run

Since this library is header-only and class-driven, you can easily include any data structure header directly into your primary file.

1. **Clone the repository:**
   ```bash
   git clone [https://github.com/yousefwesam12/Data-Structures-Library.git](https://github.com/yousefwesam12/Data-Structures-Library.git)
