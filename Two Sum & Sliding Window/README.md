# 🔀 Striver's DSA — Two Pointers & Sliding Window

> C++ solutions from Striver's DSA Sheet and related Two Pointers & Sliding Window problems, organized by fundamental patterns and optimization techniques.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Two%20Pointers%20%26%20Sliding%20Window-orange?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-7%20Problems-purple?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)

---

## 📁 Problems Solved

### 📌 Two Pointer Problems

| # | Problem | File |
| - | ------- | ---- |
| — | *Coming Soon* | — |

### 📌 Sliding Window Problems

| # | Problem | File |
| - | ------- | ---- |
| 3 | Longest Substring Without Repeating Characters | `LC3_LongestSubstringWithoutRepeatingCharacters.cpp` |
| 424 | Longest Repeating Character Replacement | `LC424_LongestRepeatingCharacterReplacement.cpp` |
| 930 | Binary Subarrays With Sum | `LC930_BinarySubarraysWithSum.cpp` |
| 992 | Subarrays with K Different Integers | `LC992_SubarraysWithKDifferentIntegers.cpp` |
| 1004 | Max Consecutive Ones III | `LC1004_MaxConsecutiveOnesIII.cpp` |
| 1358 | Number of Substrings Containing All Three Characters | `LC1358_NumberOfSubstringsContainingAllThreeCharacters.cpp` |
| 1423 | Maximum Points You Can Obtain from Cards | `LC1423_MaximumPointsYouCanObtainFromCards.cpp` |

---

## 📈 Progress

| Metric | Value |
| ------ | ----- |
| Problems Solved | 7 |
| Pattern Groups | 2 |
| Language | C++ |

---

## 💡 Key Learnings

* Understanding the fundamentals of the Two Pointer technique
* Learning when to use same-direction and opposite-direction pointers
* Mastering Fixed Size Sliding Window problems
* Understanding Variable Size Sliding Window using dynamic window expansion and contraction
* Using hash maps to track the last occurrence of characters efficiently
* Learning to jump the left pointer directly instead of shrinking the window one step at a time
* Maintaining unique elements inside the current window
* Understanding how to maximize the score by selecting elements from both ends
* Maintaining left and right running sums efficiently
* Replacing left-side selections with right-side selections incrementally
* Learning to maintain a window with at most **k** invalid elements (zeros)
* Learning to maintain a window with at most **k** character replacements
* Tracking the maximum frequency character within the current window
* Expanding and shrinking the sliding window based on constraints
* Tracking the count of zeros to determine window validity
* Using the **last occurrence (last seen)** technique to count valid substrings efficiently
* Counting substring contributions using the minimum last seen index
* Eliminating brute-force substring enumeration with an **O(n)** solution
* Solving binary array optimization problems in linear time
* Eliminating redundant computations using a sliding window approach
* Applying constant-space optimization where applicable
* Understanding why maintaining a non-decreasing maximum frequency enables an optimal linear-time solution
* Applying the **At Most K** technique to count subarrays efficiently
* Converting **Exactly K** problems into **atMost(K) − atMost(K − 1)**
* Maintaining the count of distinct elements using a frequency hash map
* Counting all valid subarrays ending at the current index using **(right − left + 1)**
* Understanding how dynamic window shrinking preserves the distinct element constraint
* Applying inclusion–exclusion to derive exact answers from helper functions
* Understanding why sliding window works only for non-negative (binary) arrays where applicable
* Improving brute-force solutions to efficient linear-time approaches
* Identifying the correct sliding window pattern for fixed and variable window problems
* Strengthening problem-solving skills through pattern recognition

---

## 🛠️ Concepts Covered

* Two Pointer Technique
* Left and Right Pointer Manipulation
* Fixed Size Sliding Window
* Variable Size Sliding Window
* Running Sum
* Hash Map
* Frequency Hash Map
* Frequency Array
* Maximum Frequency Tracking
* Character Replacement Strategy
* Last Occurrence Tracking
* Window Expansion & Shrinking
* Zero Count Tracking
* Dynamic Window Validation
* Prefix Observation
* Window Transition
* Incremental Sum Update
* End Selection Strategy
* Array Optimization
* String Processing
* Greedy Observation
* Contribution Counting
* Last Seen Index Technique
* At Most K Technique
* Distinct Element Counting
* Dynamic Window Shrinking
* Exactly K via Difference of Two Windows
* Inclusion–Exclusion Principle
* Binary Array Optimization
* Constant Space Optimization
* Time and Space Complexity Analysis

---

## ⏱️ Complexity Highlights

| Problem | Time Complexity | Space Complexity |
| -------- | ---------------- | ---------------- |
| Longest Substring Without Repeating Characters (LC 3) | **O(n)** | **O(min(n, charset))** |
| Longest Repeating Character Replacement (LC 424) | **O(n)** | **O(1)** |
| Binary Subarrays With Sum (LC 930) | **O(n)** | **O(1)** |
| Subarrays with K Different Integers (LC 992) | **O(n)** | **O(k)** *(O(n) worst case)* |
| Max Consecutive Ones III (LC 1004) | **O(n)** | **O(1)** |
| Number of Substrings Containing All Three Characters (LC 1358) | **O(n)** | **O(1)** |
| Maximum Points You Can Obtain from Cards (LC 1423) | **O(k)** | **O(1)** |

---

> 📌 Updated regularly as part of my ongoing DSA journey through Striver's A2Z DSA Sheet and LeetCode. This section covers Two Pointer techniques, Fixed & Variable Sliding Window, Frequency Arrays, Frequency Hash Maps, Maximum Frequency Tracking, Character Replacement optimization, Last Seen Index optimization, Running Sum optimization, Contribution Counting, Window Expansion & Contraction, At Most K optimization, Exactly K via Difference of Two Windows, Distinct Element Counting, Inclusion–Exclusion Principle, Prefix observations, and efficient array/string optimization patterns.
