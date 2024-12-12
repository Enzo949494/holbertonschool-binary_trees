# holbertonschool-binary_trees
```

This project implements various functions for working with binary trees in C. It includes operations such as creating nodes, inserting nodes, traversing trees, and analyzing tree properties.
```

## Binary Tree Functionalities
```
1. Fundamental Data Structure

    ** Represents hierarchical data organization

    ** Each node can have maximum two children (left and right)
2. Efficient Search

    ** Enables quick searches by dividing search space in half at each step

    ** Optimizes locating specific values

3. Practical Applications

    ** File systems: Hierarchical structure of folders and files

    ** Expression parsing: Used in compiler design

    ** Network routing: Accelerates data access and routing

4. Specific Tree Types

    ** Complete binary tree

    ** Perfect binary tree

    ** Binary search tree (BST)

5. Core Operations

    ** Node insertion

    ** Node deletion

    ** Tree traversal (pre-order, in-order, post-order)

    ** Tree balancing

6. Advanced Capabilities

    ** Height and depth measurement

    ** Leaf and node counting

    ** Sibling and uncle identification

    ** Balance factor calculation
```

## Prerequisites
```
1. A C compiler (such as gcc)
2. Ubuntu 20.04 LTS for development
```
## compilation

```
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 file_name
```

## Files
```
* "binary_trees.h": Header file containing all function prototypes and data structures

* "0-binary_tree_node.c": Creates a binary tree node

* "1-binary_tree_insert_left.c": Inserts a node as the left-child of another node

* "2-binary_tree_insert_right.c": Inserts a node as the right-child of another node

* "3-binary_tree_delete.c": Deletes an entire binary tree

* "4-binary_tree_is_leaf.c": Checks if a node is a leaf

* "5-binary_tree_is_root.c": Checks if a given node is a root

* "6-binary_tree_preorder.c": Goes through a binary tree using pre-order traversal

* "7-binary_tree_inorder.c": Goes through a binary tree using in-order traversal

* "8-binary_tree_postorder.c": Goes through a binary tree using post-order traversal

* "9-binary_tree_height.c": Measures the height of a binary tree

* "10-binary_tree_depth.c": Measures the depth of a node in a binary tree

* "11-binary_tree_size.c": Measures the size of a binary tree

* "12-binary_tree_leaves.c": Counts the leaves in a binary tree

* "13-binary_tree_nodes.c": Counts the nodes with at least 1 child in a binary tree

* "14-binary_tree_balance.c": Measures the balance factor of a binary tree

* "15-binary_tree_is_full.c": Checks if a binary tree is full

* "16-binary_tree_is_perfect.c": Checks if a binary tree is perfect

* "17-binary_tree_sibling.c": Finds the sibling of a node

* "18-binary_tree_uncle.c": Finds the uncle of a node
```

## Data Structures

The following data structures are used for this project:

```
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

## Requirements

1. Editors: Use vi, vim, or emacs.

2. Compilation:

    ** Use Ubuntu 20.04 LTS and gcc.

    ** Compile with flags: -Wall -Werror -Wextra -pedantic -std=gnu89.

3. File Format:

    ** All files must end with a new line.
	** Include a README.md file in the project root.

4. Coding Style:

    ** Follow Betty style.
	** Code will be checked with "betty-style.pl" and "betty-doc.pl".

5. Code Structure:

    ** No global variables.

	** Maximum of 5 functions per file.

	** Standard library is allowed.

6. Testing:

    ** Provided main.c files are for testing only; do not submit them.

	** Custom main.c files will be used for compilation.

7. Header Files:

    ** Function prototypes go in "binary_trees.h".
	
	** Use include guards in all header files.

8. Version Control:

    ** Remember to push your header file to the repository.

