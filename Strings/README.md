# 🔍 Striver's DSA — Strings

> C++ solutions from Striver's DSA Sheet, organized by patterns.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Strings-teal?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-30%20Problems-purple?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)

---

## 📁 Problems Solved (Pattern-Based)

---

### 🔹 Two Pointer Technique

| #       | Problem                          | File                      |
| ------- | -------------------------------- | ------------------------- |
| LC 344  | Reverse String                   | `reverseString.cpp`       |
| LC 125  | Valid Palindrome                 | `validpalindrome-125.cpp` |
| LC 345  | Reverse Vowels                   | `reverseVowels-345.cpp`   |
| LC 151  | Reverse Words in String          | `reverseWords-151.cpp`    |
| LC 58   | Length of Last Word              | `lengthOfLastword-58.cpp` |
| LC 2390 | Removing Stars (in-place)        | `removeStars-2390.cpp`    |

---

### 🔹 Stack / Stack Simulation

| #       | Problem                          | File                                   |
| ------- | -------------------------------- | -------------------------------------- |
| LC 20   | Valid Parentheses                | `validParentheses-20.cpp`              |
| LC 1047 | Remove Adjacent Duplicates       | `removeDuplicates-1047.cpp`            |
| LC 2390 | Removing Stars (stack approach)  | `removeStars-2390.cpp`                 |
| LC 1021 | Remove Outermost Parentheses     | `removeOuterParentheses-1021.cpp`      |

---

### 🔹 Hashing / Frequency Count

| #       | Problem                          | File                               |
| ------- | -------------------------------- | ---------------------------------- |
| LC 242  | Valid Anagram                    | `validAnagram-242.cpp`             |
| LC 389  | Find the Difference              | `findTheDifference-389.cpp`        |
| LC 1832 | Pangram Check                    | `PanagramOrNot-1832.cpp`           |
| LC 383  | Ransom Note                      | `ransomNote-383.cpp`               |
| LC 409  | Longest Palindrome               | `longestPalindrome-409.cpp`        |
| LC 451  | Sort Characters by Frequency     | `frequencySort-451.cpp`    |

---

### 🔹 String Manipulation

| #       | Problem                          | File                          |
| ------- | -------------------------------- | ----------------------------- |
| LC 1108 | Defang IP Address                | `defangIPAdrress-1108.cpp`    |
| LC 1910 | Remove Occurrences               | `removeOccurences-1910.cpp`   |
| LC 2785 | Sort Vowels                      | `sortVowels-2785.cpp`         |
| LC 415  | Add Strings                      | `addStrings-415.cpp`          |
| LC 1903 | Largest Odd Number               | `largestOddNumber-1903.cpp`   |
| LC 8    | String to Integer (atoi)         | `stringToInteger-8.cpp`       |

---

### 🔹 Math + String Conversion

| #       | Problem              | File                      |
| ------- | -------------------- | ------------------------- |
| LC 13   | Roman to Integer     | `romanToInt-13.cpp`       |
| LC 12   | Integer to Roman     | `IntegerToRoman-12.cpp`   |

---

### 🔹 String Matching / Patterns

| #       | Problem                      | File                         |
| ------- | ---------------------------- | ---------------------------- |
| LC 14   | Longest Common Prefix        | `longestCommonPrefix-14.cpp` |
| LC 796  | Rotate String                | `rotateString-796.cpp`       |
| —       | Check String Rotation        | `stringRotated.cpp`          |
| LC 205  | Isomorphic String            | `isomorphicString-205.cpp`   |
| LC 290  | Word Pattern                 | `wordPattern-290.cpp`        |

---

### 🔹 Basics / Misc

| #       | Problem              | File                      |
| ------- | -------------------- | ------------------------- |
| LC 9    | Palindrome Number    | `palindromeNumber-9.cpp`  |
| —       | Palindrome or Not    | `palindrome.cpp`          |
| —       | Strings Basics       | `stringsBasics.cpp`       |

---

## 📈 Progress

| Metric          | Value |
| --------------- | ----- |
| Problems Solved | 30    |
| Pattern Groups  | 7     |
| Language        | C++   |

---

## 💡 Key Learnings

* Two-pointer technique for in-place modification  
* Stack vs in-place optimization trade-offs  
* Hashing vs XOR for frequency problems  
* Pattern recognition: remove / undo → stack  
* Pattern recognition: overwrite → two pointers  
* Greedy removal strategies in strings  
* String parsing and reconstruction patterns  
* Rotation & substring tricks (`s + s`)  
* Efficient space optimization techniques  
* Depth-based parsing for parentheses problems  
* Robust string parsing with multiple conditions (spaces, signs, digits)  
* Overflow prevention using mathematical bounds check  
* Importance of checking overflow BEFORE updating value  
* Handling invalid and mixed input safely (defensive programming)  
* Bijection mapping using two hash maps (char ↔ word)  
* Validating pattern length with word count before processing  
* One-pass string parsing using index-based traversal  
* Avoiding unordered_map default insertion bugs using `.count()`  
* Handling edge cases in mapping problems (duplicate mappings, mismatches)  
* Frequency hashing using fixed-size arrays for lowercase alphabets  
* Frequency-based palindrome construction using hashing  
* Understanding odd vs even frequency contribution in palindrome problems  
* Greedy usage of characters for maximizing palindrome length  
* Using `freq - 1` to convert odd frequencies into usable even counts  
* Efficient counting using unordered_map in string problems  
* Sorting characters based on frequency using vectors of pairs  
* Custom sorting logic with frequency + lexicographical ordering  
* Reconstructing strings efficiently using repeated character insertion  
* Understanding STL pair sorting behavior in C++  

---

> 📌 Updated regularly as part of ongoing DSA practice on Striver's sheet.
