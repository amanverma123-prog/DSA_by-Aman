# 📚 Striver's DSA — Stack & Queue

> C++ implementations and problem solutions from Striver's DSA Sheet, organized by stack and queue concepts.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Stack%20%26%20Queue-red?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-13%20Implementations-purple?style=flat-square)
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
| 4 | Next Smaller Element | `nextSmallerElement.cpp` |
| 5 | LeetCode 42 – Trapping Rain Water | `trappingRainWater.cpp` |
| 6 | LeetCode 907 – Sum of Subarray Minimums | `sumOfSubarrayMinimums.cpp` |
| 7 | LeetCode 2104 – Sum of Subarray Ranges | `sumOfSubarrayRanges.cpp` |
| 8 | LeetCode 735 – Asteroid Collision | `asteroidCollision.cpp` |

---

## 🔹 Queue Applications

| # | Problem | File |
|---|---|---|
| — | Coming Soon | — |

---

# 📈 Progress

| Metric | Value |
|---|---|
| Implementations Completed | 13 |
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
- Understanding the Monotonic Increasing Stack pattern
- Finding the Next Smaller Element in linear time
- Removing larger elements to maintain increasing order
- Using reverse traversal to preprocess answers efficiently
- Learning how monotonic stacks solve nearest-element problems in **O(N)**
- Understanding the Prefix Maximum and Suffix Maximum preprocessing technique
- Calculating trapped water using boundary heights
- Optimizing Trapping Rain Water from **O(N)** space to **O(1)** using Two Pointers
- Learning why the smaller boundary determines trapped water
- Maintaining `leftMax` and `rightMax` while moving pointers inward
- Understanding the contribution technique for subarray problems
- Computing Previous Smaller or Equal Element (**PSEE**) and Next Smaller Element (**NSE**)
- Determining how many subarrays consider each element as the minimum
- Applying the contribution formula **arr[i] × left × right**
- Handling duplicate values correctly using different comparison operators (`>` and `>=`)
- Optimizing a brute-force **O(N²)** approach into an optimal **O(N)** solution using a Monotonic Stack
- Extending the contribution technique to compute subarray maximums
- Computing Previous Greater or Equal Element (**PGEE**) and Next Greater Element (**NGE**)
- Calculating the sum of subarray ranges using **(Sum of Maximums − Sum of Minimums)**
- Understanding tie-breaking rules (`<`, `<=`, `>`, `>=`) for duplicate elements
- Applying four monotonic stack traversals to solve range contribution problems in **O(N)** time
- Understanding stack-based simulation problems
- Resolving chain reactions using iterative collision handling
- Using a `while` loop to process multiple consecutive collisions
- Determining surviving asteroids based on collision conditions
- Maintaining only surviving elements inside the stack
- Learning how stack simulation efficiently models sequential interactions

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
- Next Smaller Element
- LeetCode 42 – Trapping Rain Water
- LeetCode 907 – Sum of Subarray Minimums
- LeetCode 2104 – Sum of Subarray Ranges
- LeetCode 735 – Asteroid Collision

## ⏳ Upcoming

- Stack using Linked List
- Queue using Linked List
- Monotonic Stack
- Previous Greater Element
- Previous Smaller Element
- Stock Span Problem
- Valid Parentheses
- Daily Temperatures
- Largest Rectangle in Histogram
- Maximal Rectangle
- Sliding Window Maximum
- First Negative Integer in Every Window
- Rotten Oranges
- Number of Recent Calls
- Deque-based Problems
- LFU/LRU Cache
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
| Next Smaller Element | O(N) | — | — | Monotonic Increasing Stack | O(N) |
| Trapping Rain Water | O(N) | — | — | Two Pointer Technique | O(1) |
| Sum of Subarray Minimums | O(N) | — | — | Monotonic Stack + Contribution Technique | O(N) |
| Sum of Subarray Ranges | O(N) | — | — | Monotonic Stack + Contribution Technique | O(N) |
| Asteroid Collision | O(N) | — | — | Stack-based Simulation | O(N) |

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
- Monotonic Increasing Stack
- Monotonic Decreasing Stack
- Next Greater Element
- Next Greater Element II
- Next Smaller Element
- Previous Greater or Equal Element (PGEE)
- Previous Smaller or Equal Element (PSEE)
- Next Greater Element (NGE)
- Next Smaller Element (NSE)
- Circular Arrays
- Circular Traversal
- Modulo Indexing
- Right-to-Left Traversal
- Hash Map Preprocessing
- Stack + Hash Map Pattern
- Prefix Maximum
- Suffix Maximum
- Two Pointer Technique
- Trapping Rain Water
- Sum of Subarray Minimums
- Sum of Subarray Ranges
- Contribution Technique
- Maximum Contribution Technique
- Minimum Contribution Technique
- Range Contribution Problems
- Four-Pass Monotonic Stack
- Duplicate Element Handling
- Space Optimization
- Boundary-Based Problems
- Stack-based Simulation
- Collision Simulation
- Chain Reaction Handling
- Sequential State Updates
- Vector as Stack
- Conditional Stack Operations

---

# 📌 Repository Goal

This repository documents my complete journey through **Striver's DSA Sheet** for **Stack & Queue**. Each implementation is written from scratch in **C++**, with a focus on understanding the underlying concepts, analyzing time and space complexity, and building a strong foundation before solving advanced interview problems.

---

> ⭐ Feel free to explore the implementations, compare approaches, and follow along as I continue expanding this repository with more Stack & Queue problems from Striver's DSA Sheet.
