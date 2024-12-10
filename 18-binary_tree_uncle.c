#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a given node
 * @node: Pointer to the node to find the uncle for
 *
 * Return: Pointer to the uncle node, or NULL if no uncle exists
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
	{
	binary_tree_t *grandparent = node->parent->parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);


	if (grandparent == NULL)
		return (NULL);

	if (node->parent == grandparent->left)
		return (grandparent->right);

	return (grandparent->left);
	}
