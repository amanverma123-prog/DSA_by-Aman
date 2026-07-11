# 📚 Striver's DSA — Stack & Queue

> C++ implementations and problem solutions from Striver's DSA Sheet, organized by stack and queue concepts.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Stack%20%26%20Queue-red?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-17%20Implementations-purple?style=flat-square)
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
| 9 | LeetCode 402 – Remove K Digits | `removeKDigits.cpp` |
| 10 | LeetCode 901 – Online Stock Span | `onlineStockSpan.cpp` |

---

## 🔹 Queue Applications

| # | Problem | File |
|---|---|---|
| 1 | LeetCode 239 – Sliding Window Maximum | `slidingWindowMaximum.cpp` |
| 2 | Celebrity Problem (GFG / LeetCode 277) | `celebrityProblem.cpp` |

---

# 📈 Progress

| Metric | Value |
|---|---|
| Implementations Completed | 17 |
| Pattern Groups | 4 |
| Language | C++ |

---

# 💡 Key Learnings

### Stack

- Understanding the LIFO (Last In, First Out) principle
- Implementing stacks and queues using alternate data structures
- Monotonic Increasing & Monotonic Decreasing Stack patterns
- Circular array traversal using modulo indexing
- Prefix/Suffix preprocessing and Two Pointer optimization
- Contribution technique for subarray problems
- Previous/Next Greater & Smaller element computation
- Handling duplicates using proper comparison operators
- Stack-based simulation problems
- Chain reaction handling with iterative collision processing
- Greedy optimization using Monotonic Increasing Stack
- Removing larger preceding digits to construct the smallest number
- Handling remaining removals after traversal
- Removing leading zeros efficiently
- Combining Stack + Greedy to solve lexicographical optimization problems
- Online processing using persistent data structures
- Stock Span pattern using Monotonic Decreasing Stack
- Span compression using `{price, span}` pairs
- Amortized O(1) analysis for stack operations

### Queue

- FIFO (First In, First Out) principle
- Circular Queue implementation
- Queue using Two Stacks
- Lazy Transfer Technique
- Amortized analysis for queue operations
- Sliding Window optimization
- Monotonic Deque for maintaining window maximums
- Efficient removal of out-of-window indices
- Maintaining decreasing order inside deque
- O(N) processing by pushing and popping each element at most once
- Candidate elimination technique
- Two-pointer elimination strategy
- Verification of candidate using row and column checks
- Constant space optimization for matrix-based problems

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
- LeetCode 402 – Remove K Digits
- LeetCode 901 – Online Stock Span
- LeetCode 239 – Sliding Window Maximum
- Celebrity Problem (GFG / LeetCode 277)

## ⏳ Upcoming

- Stack using Linked List
- Queue using Linked List
- Monotonic Stack
- Previous Greater Element
- Previous Smaller Element
- Valid Parentheses
- Daily Temperatures
- Largest Rectangle in Histogram
- Maximal Rectangle
- First Negative Integer in Every Window
- Rotten Oranges
- Number of Recent Calls
- Deque-based Problems
- LFU/LRU Cache

---

# ⏱️ Complexity Summary

| Problem | Time | Space | Technique |
|---|---:|---:|---|
| Stack (Array) | O(1) | O(N) | Array |
| Queue (Circular Array) | O(1) | O(N) | Circular Array |
| Stack (Single Queue) | Push O(N) | O(N) | Queue Rotation |
| Queue (Two Stacks) | Amortized O(1) | O(N) | Lazy Transfer |
| Min Stack | O(1) | O(N) | Encoding |
| Next Greater Element II | O(N) | O(N) | Monotonic Stack |
| Next Smaller Element | O(N) | O(N) | Monotonic Stack |
| Trapping Rain Water | O(N) | O(1) | Two Pointers |
| Sum of Subarray Minimums | O(N) | O(N) | Contribution + Stack |
| Sum of Subarray Ranges | O(N) | O(N) | Contribution + Stack |
| Asteroid Collision | O(N) | O(N) | Stack Simulation |
| Remove K Digits | O(N) | O(N) | Monotonic Stack + Greedy |
| Online Stock Span | Amortized O(1) | O(N) | Monotonic Stack |
| Sliding Window Maximum | O(N) | O(K) | Monotonic Deque |
| Celebrity Problem | O(N) | O(1) | Two-Pointer Elimination |

---

# 🎯 Topics Covered

- Stack Fundamentals
- Queue Fundamentals
- Circular Queue
- Stack using Queue
- Queue using Stacks
- Min Stack
- Monotonic Stack
- Monotonic Increasing Stack
- Monotonic Decreasing Stack
- Monotonic Deque
- Next Greater Element
- Next Smaller Element
- Previous Greater/Smaller Elements
- Stock Span Problem
- Online Algorithms
- Sliding Window
- Sliding Window Maximum
- Candidate Elimination
- Celebrity Problem
- Two-Pointer Technique
- Amortized Analysis
- Span Compression
- Circular Arrays
- Hash Map
- Prefix & Suffix Arrays
- Contribution Technique
- Trapping Rain Water
- Sum of Subarray Minimums
- Sum of Subarray Ranges
- Stack-based Simulation
- Asteroid Collision
- Greedy Algorithm
- Remove K Digits
- Lexicographically Smallest Number
- Leading Zero Handling
- Stack + Greedy Pattern

---

# 📌 Repository Goal

This repository documents my complete journey through **Striver's DSA Sheet** for **Stack & Queue**. Every implementation is written in **C++** with emphasis on understanding patterns, time complexity, and interview-oriented problem solving.

---

> ⭐ Feel free to explore the implementations and follow along as I continue completing Striver's DSA Sheet.
