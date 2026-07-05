# 📚 Striver's DSA — Stack & Queue

> C++ implementations and problem solutions from Striver's DSA Sheet, organized by stack and queue concepts.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Stack%20%26%20Queue-red?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-8%20Implementations-purple?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)

---

# 📁 Problems Solved (Pattern-Based)

## 🔹 Stack Implementation

| # | Problem | File |
|---|---|---|
| 1 | Stack using Array | `stackUsingArray.cpp` |
| 2 | Stack using Queue (Single Queue) | `stackUsingQueue.cpp` |

---

## 🔹 Queue Implementation

| # | Problem | File |
|---|---|---|
| 1 | Queue using Array (Circular Queue) | `queueUsingArray.cpp` |
| 2 | Queue using Stacks | `queueUsingStacks.cpp` |
| 3 | LeetCode 232 – Implement Queue using Stacks | `implementQueueUsingStacks.cpp` |

---

## 🔹 Stack Applications

| # | Problem | File |
|---|---|---|
| 1 | LeetCode 155 – Min Stack | `minStack.cpp` |
| 2 | LeetCode 496 – Next Greater Element I | `nextGreaterElementI.cpp` |
| 3 | LeetCode 503 – Next Greater Element II | `nextGreaterElementII.cpp` |

---

## 🔹 Queue Applications

| # | Problem | File |
|---|---|---|
| — | Coming Soon | — |

---

# 📈 Progress

| Metric | Value |
|---|---|
| Implementations Completed | 8 |
| Pattern Groups | 4 |
| Language | C++ |

---

# 💡 Key Learnings

### Stack

- Understanding the LIFO (Last In, First Out) principle
- Implementing a stack using arrays
- Implementing a stack using a single queue
- Simulating LIFO behavior using FIFO operations
- Rotating queue elements after every insertion
- Understanding the trade-off of **O(n)** push for **O(1)** pop and top
- Maintaining stack operations without using an actual stack
- Designing a stack that supports retrieving the minimum element in **O(1)** time
- Learning the optimal **single-stack encoding technique**
- Using mathematical encoding and decoding to store previous minimum values
- Understanding integer overflow handling using **`long long`**
- Stack operations: `push()`, `pop()`, `top()`, `getMin()`, and `empty()`
- Understanding the Monotonic Decreasing Stack pattern
- Finding the Next Greater Element in linear time
- Traversing arrays from right to left for preprocessing
- Using `unordered_map` to answer multiple queries in **O(1)**
- Combining Stack and Hash Map for optimized solutions
- Extending the Next Greater Element concept to Circular Arrays
- Simulating a circular array without duplicating the input
- Using modulo (`i % n`) to wrap indices efficiently
- Traversing **2 × N** elements while maintaining **O(N)** time complexity
- Reusing the Monotonic Decreasing Stack for circular traversal
- Understanding why answers are computed only during the second traversal

### Queue

- Understanding the FIFO (First In, First Out) principle
- Implementing a queue using a circular array
- Implementing a queue using two stacks
- Using lazy transfer between stacks for efficient queue operations
- Applying amortized analysis for **O(1)** pop and peek operations
- Efficiently simulating queue behavior using stack operations
- Managing queue operations: `push()`, `pop()`, `peek()`, and `empty()`
- Understanding the trade-offs of different queue implementations

---

# 🚀 Stack & Queue Journey

## ✅ Completed

- Stack using Array
- Queue using Array (Circular Queue)
- Stack using Queue (Single Queue)
- Queue using Stacks
- LeetCode 232 – Implement Queue using Stacks
- LeetCode 155 – Min Stack
- LeetCode 496 – Next Greater Element I
- LeetCode 503 – Next Greater Element II

## ⏳ Upcoming

- Stack using Linked List
- Queue using Linked List
- Monotonic Stack
- Next Smaller Element
- Previous Greater Element
- Previous Smaller Element
- Stock Span Problem
- Valid Parentheses
- Asteroid Collision
- Daily Temperatures
- Largest Rectangle in Histogram
- Maximal Rectangle
- Sliding Window Maximum
- First Negative Integer in Every Window
- Rotten Oranges
- Number of Recent Calls
- Deque-based Problems
- LFU/LRU Cache
- Celebrity Problem
- Trapping Rain Water
- Sum of Subarray Minimums
- Online Stock Span

---

# ⏱️ Complexity Summary

| Data Structure / Problem | Push | Pop | Peek/Top | Extra Operation | Space |
|---|---:|---:|---:|---:|---:|
| Stack (Array) | O(1) | O(1) | O(1) | — | O(N) |
| Queue (Circular Array) | O(1) | O(1) | O(1) | — | O(N) |
| Stack (Single Queue) | O(N) | O(1) | O(1) | — | O(N) |
| Queue (Two Stacks) | O(1) | Amortized O(1) | Amortized O(1) | — | O(N) |
| Min Stack | O(1) | O(1) | O(1) | **getMin(): O(1)** | O(N) |
| Next Greater Element II | O(N) | — | — | Circular Monotonic Stack | O(N) |

---

# 🎯 Topics Covered

- Stack Fundamentals
- Queue Fundamentals
- Array-based Implementation
- Circular Queue
- Queue Rotation Technique
- Stack using Queue
- Queue using Stacks
- Lazy Transfer Technique
- Min Stack
- Mathematical Encoding Technique
- Constant-Time Minimum Retrieval
- Amortized Time Complexity
- Data Structure Simulation
- Time Complexity Analysis
- Space Complexity Analysis
- Monotonic Stack
- Next Greater Element
- Next Greater Element II
- Circular Arrays
- Circular Traversal
- Modulo Indexing
- Right-to-Left Traversal
- Hash Map Preprocessing
- Stack + Hash Map Pattern

---

# 📌 Repository Goal

This repository documents my complete journey through **Striver's DSA Sheet** for **Stack & Queue**. Each implementation is written from scratch in **C++**, with a focus on understanding the underlying concepts, analyzing time and space complexity, and building a strong foundation before solving advanced interview problems.

---

> ⭐ Feel free to explore the implementations, compare approaches, and follow along as I continue expanding this repository with more Stack & Queue problems from Striver's DSA Sheet.
