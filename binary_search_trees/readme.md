# Binary Search Trees
## What?
1. They are binary trees which produce sorted elements upon inorder traversal.
1. elements '<' node are placed as the 'left child', and elements '>' node are placed as the 'right' child.
1. There are catalan number different ways to create a binary search tree of N elements -> T(N) = <sup>2N</sup>C<sub>N</sub> / (N + 1)

## Seaching for an element
### 1. Recursive
1. if node_val == NULL, return NULL
1. if node_val == element, return node
1. if node_val < element, return binarysearch(node_left_child, element)
1. if node_val > element, return binarysearch(node_right_child, element)

### 2. Iterative
1. while node != NULL
1. if node_val == element, return node
1. if node_val < element, point at left child
1. if node_val > element, point at right child

Note: conversion of tail recursions to iterative versions do not require a stack.




