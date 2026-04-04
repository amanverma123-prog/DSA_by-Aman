## 🔍 Binary Search Problems

---

### 📌 LC34 – Find First and Last Position of Element in Sorted Array

**File:** `LC34_search_range.cpp`

* Used binary search twice (first & last occurrence)
* Time: O(log n), Space: O(1)

---

### 📌 LC35 – Search Insert Position

**File:** `LC35_search_insert.cpp`

* Applied lower bound concept
* Found first index where element ≥ target
* Time: O(log n), Space: O(1)

---

### 📌 Count Occurrences of Target

**File:** `count_occurrences.cpp`

* First & last occurrence → count = last - first + 1
* Time: O(log n), Space: O(1)

---

### 💡 Learnings

* Binary search patterns (left bias / right bias)
* Lower bound & upper bound
* Edge case handling

## 🔍 Binary Search Problems

---

### 📌 Floor and Ceil in Sorted Array

**File:** `floor_ceil.cpp`

**Problem:**
Find:

* **Floor** → greatest element ≤ target
* **Ceil** → smallest element ≥ target

**Approach:**

* Used binary search to track potential answers
* For **floor**:

  * If `arr[mid] ≤ target` → store answer, move right
* For **ceil**:

  * If `arr[mid] ≥ target` → store answer, move left

**Time Complexity:** O(log n)
**Space Complexity:** O(1)

---

### 📌 Upper Bound of an Element

**File:** `upperBound.cpp`

**Problem:**
Find the **first index where element > target**

**Approach:**

* Applied binary search
* If `arr[mid] > target` → possible answer → move left
* Else → move right

**Key Idea:**

* Upper bound = first element strictly greater than target

**Time Complexity:** O(log n)
**Space Complexity:** O(1)

---

### 💡 Learnings

* Difference between **floor, ceil, lower bound, upper bound**
* Understanding **left vs right movement in binary search**
* Building base for advanced problems like:

  * Search insert position
  * First & last occurrence
  * Count occurrences
