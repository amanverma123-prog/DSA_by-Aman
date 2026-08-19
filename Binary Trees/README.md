# 🌳 Striver's DSA — Binary Trees

> C++ solutions from Striver's A2Z DSA Sheet and LeetCode Binary Tree problems, covering traversals, BFS, DFS, recursion, tree views, and fundamental tree concepts.

![C++](https://img.shields.io/badge/Language-C%2B%2B-blue?style=flat-square)
![Topic](https://img.shields.io/badge/Topic-Binary%20Trees-green?style=flat-square)
![Problems](https://img.shields.io/badge/Solved-19%20Problems-purple?style=flat-square)
![Status](https://img.shields.io/badge/Status-Active-success?style=flat-square)

---

# 📁 Problems Solved

## 📌 Tree Traversals

| #      | Problem                                                    | File                         |
| ------ | ---------------------------------------------------------- | ---------------------------- |
| LC 94  | Binary Tree Inorder Traversal                              | `inOrderTraversal-94.cpp`    |
| LC 144 | Binary Tree Preorder Traversal                             | `preorderTraversal-144.cpp`  |
| LC 145 | Binary Tree Postorder Traversal                            | `postorderTraversal-145.cpp` |
| —      | Inorder, Preorder & Postorder Traversal (Single Traversal) | `in-pre-post_traversal.cpp`  |

---

## 📌 Breadth-First Search (BFS)

| #      | Problem                                  | File                          |
| ------ | ---------------------------------------- | ----------------------------- |
| LC 102 | Binary Tree Level Order Traversal        | `levelOrderTraversal-102.cpp` |
| LC 103 | Binary Tree Zigzag Level Order Traversal | `zigzagLevelOrder-103.cpp`    |

---

## 📌 Tree DFS

| #       | Problem                                   | File                           |
| ------- | ----------------------------------------- | ------------------------------ |
| LC 104  | Maximum Depth of Binary Tree              | `maximumDepth-104.cpp`         |
| LC 110  | Balanced Binary Tree                      | `balancedBinaryTree-110.cpp`   |
| LC 1315 | Sum of Nodes with Even-Valued Grandparent | `sumEvenGrandparent-1315.cpp`  |
| LC 543  | Diameter of Binary Tree                   | `diameterOfBinaryTree-543.cpp` |
| LC 124  | Binary Tree Maximum Path Sum              | `maxPathSum-124.cpp`           |
| LC 100  | Same Tree                                 | `sameTree-100.cpp`             |
| LC 101  | Symmetric Tree                            | `symmetricTree-101.cpp`        |
| LC 236  | Lowest Common Ancestor of a Binary Tree   | `lowestCommonAncestor-236.cpp` |
| —       | All Root-to-Leaf Paths                    | `allRootToLeaf.cpp`            |

---

## 📌 Binary Tree Views

| #       | Problem                     | File                    |
| ------- | --------------------------- | ----------------------- |
| —       | Top View of Binary Tree     | `topView.cpp`            |
| —       | Bottom View of Binary Tree  | `bottomView.cpp`         |
| LC 199  | Binary Tree Right Side View | `rightSideView-199.cpp` |

---

# 📈 Progress

| Metric          | Value   |
| --------------- | ------- |
| Problems Solved | **19**  |
| Pattern Groups  | **5**   |
| Language        | **C++** |

---

# 💡 Key Learnings

- Binary Tree node representation
- Recursive Depth-First Search (DFS)
- Breadth-First Search (BFS) using Queue
- Inorder, Preorder and Postorder traversals
- Single traversal to generate all three DFS traversals
- Level Order Traversal using queue
- Processing nodes level-by-level
- Tree recursion and recursion stack analysis
- Passing vectors by reference for efficient traversal
- Using ancestor information during DFS recursion
- Solving tree problems using parent and grandparent relationships
- Computing tree height using recursive divide-and-conquer
- Checking whether a binary tree is height-balanced
- Optimizing recursive solutions using sentinel values (`-1`)
- Combining height calculation and balance validation in a single DFS traversal
- Calculating the diameter of a binary tree using subtree heights
- Understanding that the diameter can pass through any node, not just the root
- Tracking the maximum diameter during a single DFS traversal
- Calculating maximum path sum using postorder DFS
- Ignoring negative subtree contributions using `max(0, ...)`
- Understanding the difference between a downward path and a path passing through a node
- Using a global/reference variable to track the maximum path sum
- Building intuition for recursive tree-based dynamic programming
- Comparing two binary trees recursively
- Handling null nodes and structural differences during tree comparison
- Checking both node values and corresponding left/right subtrees
- Understanding recursive structural equality of binary trees
- Checking binary tree symmetry using recursive mirror comparison
- Comparing left and right subtrees in opposite directions
- Handling null nodes and mismatched values as recursion base cases
- Understanding mirror relationships between corresponding nodes
- Using recursion to validate structural and value-based symmetry
- Using BFS to process binary tree nodes level-by-level
- Alternating traversal direction for zigzag level order
- Using index manipulation to reverse the order of alternate levels
- Avoiding an additional stack or repeated vector reversal
- Using horizontal distance to determine the position of nodes
- Using BFS to identify the topmost node at each horizontal distance
- Using a map to store the first node encountered at each horizontal position
- Understanding how level order traversal helps construct the top view
- Applying coordinate-based mapping to binary tree view problems
- Using DFS with level tracking to solve the Right Side View
- Traversing the right subtree before the left subtree to prioritize visible nodes
- Storing the first node encountered at each depth
- Understanding how traversal order can determine tree visibility
- Using recursion depth to represent the current level of the tree
- Finding the Lowest Common Ancestor using recursive DFS
- Using recursive return values to propagate target nodes upward
- Understanding how left and right subtree results determine the LCA
- Identifying the LCA when both target nodes are found in different subtrees
- Handling `NULL`, `p`, and `q` as recursion base cases
- Generating all root-to-leaf paths using DFS and backtracking
- Using a path vector to maintain the current traversal path
- Identifying leaf nodes using `left == NULL && right == NULL`
- Using backtracking to remove nodes after exploring a subtree
- Collecting every root-to-leaf path without using an unnecessary stack
- Understanding the Choose → Explore → Unchoose recursion pattern

---

# 📚 Upcoming Topics

- Left View of Binary Tree
- Serialize & Deserialize Binary Tree (LC 297)
- Binary Search Trees (BST)

---

# 🚀 Progress Roadmap

- ✅ Tree Traversals
- ✅ Breadth-First Search (BFS)
- ✅ Tree DFS Basics
- ✅ Tree Properties (Maximum Depth & Balanced Binary Tree)
- ✅ Diameter of Binary Tree
- ✅ Maximum Path Sum
- ✅ Same Tree
- ✅ Symmetric Tree
- ✅ Binary Tree Zigzag Level Order Traversal
- ✅ Binary Tree Views — Top View
- ✅ Binary Tree Right Side View
- ✅ All Root-to-Leaf Paths
- ✅ Lowest Common Ancestor (LCA)
- ⏳ Left View of Binary Tree
- ⏳ Serialize & Deserialize Binary Tree
- ⏳ Binary Search Trees (BST)
- ⏳ Advanced Binary Tree Problems

---

> 📌 Updated regularly as part of my ongoing DSA journey through Striver's A2Z DSA Sheet.
