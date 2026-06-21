# 🔗 Striver's DSA — Bit Manipulation

> C++ solutions from Striver's DSA Sheet and related Bit Manipulation practice problems, organized by binary representation, bitwise operations, bit masking, XOR techniques, and optimization strategies.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Bit%20Manipulation-purple?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-12%20Problems-purple?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)

---

## 📁 Problems Solved

### 📌 Basics: Conversion

| # | Problem | File |
| - | ------- | ---- |
| 1 | Decimal to Binary Conversion | `decToBin.cpp` |
| 2 | Binary to Decimal Conversion | `binToDec.cpp` |

---

### 📌 Playing with i-th Bit

| # | Problem | File |
| - | ------- | ---- |
| 3 | Check if i-th Bit is Set or Not | `checkithBit.cpp` |
| 4 | Set the i-th Bit | `setithBit.cpp` |
| 5 | Clear the i-th Bit | `clearIthBit.cpp` |
| 6 | Toggle the i-th Bit | `toggleIthBit.cpp` |

---

### 📌 Basic Bit Problems

| # | Problem | File |
| - | ------- | ---- |
| 7 | Count Number of Set Bits | `countSetBits.cpp` |
| 8 | Check if Number is Power of 2 | `powerOf2.cpp` |

---

### 📌 Bit Tricks & XOR

| # | Problem | File |
| - | ------- | ---- |
| 9 | Remove the Last Set Bit | `removeLastSetBit.cpp` |
| 10 | Swap Two Numbers using XOR | `swapTwoNumbers.cpp` |
| 11 | LeetCode 2220 - Minimum Bit Flips to Convert Number | `minBitFlips-2220.cpp` |

---

### 📌 Subsets using Bit Manipulation

| # | Problem | File |
| - | ------- | ---- |
| 12 | LeetCode 78 - Subsets | `subsets78.cpp` |

---

## 📈 Progress

| Metric | Value |
| ------ | ----- |
| Problems Solved | 12 |
| Pattern Groups | 5 |
| Language | C++ |

---

## 💡 Key Learnings

* Understanding binary representation of integers
* Converting decimal numbers to binary format
* Converting binary numbers back to decimal
* Working with powers of two
* Understanding Least Significant Bit (LSB)
* Understanding Most Significant Bit (MSB)
* Using bitwise AND (`&`) operator
* Using bitwise OR (`|`) operator
* Using bitwise XOR (`^`) operator
* Using bitwise NOT (`~`) operator
* Using left shift (`<<`) operator
* Using right shift (`>>`) operator
* Checking whether a specific bit is set
* Setting a specific bit using bit masks
* Clearing a specific bit efficiently
* Toggling a specific bit using XOR
* Counting the number of set bits efficiently
* Checking whether a number is a power of two
* Removing the last set bit using `n & (n - 1)`
* Swapping two numbers without a temporary variable
* Using XOR to compare binary representations
* Finding minimum bit flips between two numbers
* Generating subsets using recursion
* Generating subsets using bit masking
* Understanding binary state representation
* Learning constant-time bit manipulation tricks
* Building a strong foundation for advanced bitwise problems

---

## 🛠️ Concepts Covered

### Number System Fundamentals
* Decimal Representation
* Binary Representation
* Positional Number System
* Powers of Two
* Binary Arithmetic

### Conversion Techniques
* Decimal to Binary Conversion
* Binary to Decimal Conversion
* Modulo and Division Method
* Reverse Binary Construction

### Bitwise Operators
* AND (`&`)
* OR (`|`)
* XOR (`^`)
* NOT (`~`)
* Left Shift (`<<`)
* Right Shift (`>>`)

### Bit Manipulation Techniques
* Check i-th Bit
* Set i-th Bit
* Clear i-th Bit
* Toggle i-th Bit
* Count Set Bits
* Power of Two Check
* Bit Masking
* Last Set Bit Removal
* XOR Swapping
* XOR Difference Detection
* Binary State Encoding

### Subset Generation Techniques
* Pick / Not Pick Recursion
* Power Set Generation
* Bit Mask Enumeration
* Binary State Representation

### Optimization Concepts
* Constant Time Operations
* Binary-Level Computation
* Efficient Memory Usage
* Low-Level Number Manipulation
* Brian Kernighan's Algorithm

---

## ⏱️ Complexity Highlights

| Problem | Time Complexity | Space Complexity |
| -------- | ---------------- | ---------------- |
| Decimal to Binary Conversion | O(log N) | O(log N) |
| Binary to Decimal Conversion | O(log N) | O(1) |
| Check if i-th Bit is Set | O(1) | O(1) |
| Set the i-th Bit | O(1) | O(1) |
| Clear the i-th Bit | O(1) | O(1) |
| Toggle the i-th Bit | O(1) | O(1) |
| Count Number of Set Bits | O(Number of Set Bits) |
| Check if Number is Power of 2 | O(1) | O(1) |
| Remove the Last Set Bit | O(1) | O(1) |
| Swap Two Numbers using XOR | O(1) | O(1) |
| Minimum Bit Flips to Convert Number | O(Number of Set Bits) | O(1) |
| Subsets | O(N × 2ᴺ) | O(N) Auxiliary |

---

## 🎯 Upcoming Topics

* Count Trailing Zeros
* Count Leading Zeros
* Find Rightmost Set Bit
* Single Number
* Single Number II
* Missing Number using XOR
* XOR from 1 to N
* Divide Two Integers
* Bitwise AND of Numbers Range
* Maximum XOR Problems
* Advanced Bit Masking
* Subset Sum using Bitmask
* Meet in the Middle
* Bitwise Dynamic Programming

---

## 🚀 Why Bit Manipulation?

Bit Manipulation allows operations to be performed directly on the binary representation of data, making many algorithms significantly faster and more memory-efficient. These techniques are frequently used in competitive programming, system design, embedded systems, cryptography, operating systems, and technical interviews.

Mastering bit manipulation develops a deeper understanding of how computers store and process information at the binary level while unlocking elegant solutions to many optimization problems.

---

> 📌 Updated regularly as part of ongoing DSA practice on Striver's Sheet and Bit Manipulation concepts, covering binary representation, number system conversions, bitwise operators, XOR techniques, subset generation, bit masking strategies, and optimization patterns.
