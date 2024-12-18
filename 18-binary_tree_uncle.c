#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a given node
 * @node: Pointer to the node to find the uncle for
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
	{
	if (!node)
		return (NULL);

	if (node->parent && node->parent->parent)
	{
		if (node->parent->parent->left == node->parent)
			return (node->parent->parent->right);
		if (node->parent->parent->right == node->parent)
			return (node->parent->parent->left);
	}
	return (NULL);
	}

