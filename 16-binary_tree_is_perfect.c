#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: The height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
	{
	size_t left_height;
	size_t right_height;

	if (tree == NULL)
		return (0);


	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
	}

/**
 * is_perfect_recursive - Helper function to check if a binary tree is perfect
 * @tree: Pointer to the root node of the tree
 * @depth: The depth of the current node
 * @level: The level of leaf nodes
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
	int is_perfect_recursive(const binary_tree_t *tree, int depth, int level)
	{
	if (tree == NULL)
		return (depth == level);

	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);

	if (tree->left == NULL || tree->right == NULL)
		return (0);

	return (is_perfect_recursive(tree->left, depth + 1, level) &&
			is_perfect_recursive(tree->right, depth + 1, level));
	}

/**
 * binary_tree_is_perfect - Checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to check
 *
 * Return: 1 if the tree is perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
	{
	int depth = binary_tree_height(tree);

	if (tree == NULL)
		return (0);


	return (is_perfect_recursive(tree, 0, depth - 1));
	}
