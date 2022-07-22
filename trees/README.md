# Trees
## [? and Terminology]()
1. Trees are a [collection of nodes]() and the links b/w them called edges.
1. if N == number of nodes, then number of edges = N - 1 
1. Nodes can be parent nodes and child nodes relative to each other.
1. The absolute parent node is the root node / starting node which has no parent.
1. There can be only one parent node for any number of children.
1. Children of the same parent are called *sibling* nodes.
1. Children of the a node's immediate children and their children and so forth are referred to as a node's descendents.
1. A node's parent and grand-parent and so forth in the path to the root node are referred to as its ancestors.
-
1. [Degree]() of a node refers to the number of its immediate children.
1. Nodes with at least one child / degree > 0 are called non-terminal / internal nodes / non-leaf nodes.
1. Nodes with no children / degree = 0 are called terminal / external / leaf nodes.
1. [Tree Levels]() - A level of a tree implies the minimum number of nodes present totally upto the level. 
1. Example : Level 1 has only one node - root node. Level 2 has one node + the nodes in Level 1 = 2.
1. [Tree Height]() - implies the minimum number of edges present totally upto the level = level - 1
1. A collection of trees - Forest.
1. The [degree of a tree]() - is the maximum number of children a tree can have.

# Bi-nary Tree
1. Trees with [degree = 2]()
1. i.e nodes can have 0 or 1 or max 2 children.
1. Left and right skewed binary trees. children of nodes are always to the left / right.

## [Number of binary trees given N nodes]()
N is dependent on the type of nodes - unlabelled or labelled nodes.

### a. For Unlabelled nodes :
1. Number of binary trees - [T(N) = <sup>2N</sup>C<sub>N</sub> / N + 1]() - Catalan formula
1. Number of binary trees with maximum height = 2<sup>N-1</sup>
1. Also number of binary trees T(N) = summation (i = 1 to N) T(i - 1) * T(N - i)

### b. For labelled nodes :
1. There N! ways of arranging N labels for one tree configuration.
1. Therefore [T(N) = (<sup>2N</sup>C<sub>N</sub> / N + 1) * N!]()

## [Number of nodes in a binary tree]()
### 1. Minimum and maximum number of nodes [given height]() (Binary Tree) :
1. minimum number of nodes = height (h) + 1
1. maximum number of nodes = 2<sup>h + 1</sup>

### 2. Minimum and maximum height of a binary tree [given number of nodes n]() :
1. minimum height = log<sub>2</sub>(n + 1) - 1
1. maximum height = n - 1

### 3. Internal nodes and extenal nodes of a binary tree
[Number of leaf nodes]() = (Number of [nodes with degree 2]()) + 1

# Strict Binary Trees
A binary tree with nodes having degrees of only 0 and 2.

### a. Minimum and maximum number of nodes in a strict binary tree [given height h]() :
1. minimum number of nodes = 2h + 1
1. maximum number of nodes = 2<sup>h + 1</sup> - 1

### b. Minimum and maximum height of a strict binary tree given [number of nodes n]() :
1. minimum height = log<sub>2</sub>(n + 1) - 1
1. maximum height = (n - 1) / 2

### c. Internal nodes and extenal nodes of a strict binary tree
[Number of leaf nodes]() = (Number of [internal nodes]()) + 1

# m-ary trees
Trees that have degree m => Nodes of the tree cannot have degree more than m
### Strict m-ary trees
Trees that only have nodes with degree 0 or m

### 1. Minimum and maximum number of nodes in a strict binary tree [given height h]() :
m -> degree
1. minimum number of nodes = mh + 1
1. maximum number of nodes = (m<sup>h + 1</sup> - 1) / m - 1

### 2. Minimum and maximum height of a m-ary tree given [number of nodes n]() :
1. minimum height = log<sub>m</sub>[n (m - 1) + 1] - 1 
1. maximum height = (n - 1) / m

### c. Internal nodes and extenal nodes of a strict binary tree
[Number of leaf nodes]() = (m - 1) X (Number of [internal nodes]()) + 1

# Representation of a binary tree
Can be represented using arrays or linked nodes

### Array Representation
![](images/Screenshot%20from%202022-07-21%2008-32-48.png)
![](images/Screenshot%20from%202022-07-21%2008-35-03.png)

### Linked Representation
![](images/Screenshot%20from%202022-07-22%2008-20-33.png)
![](images/Screenshot%20from%202022-07-22%2008-22-21.png)

















