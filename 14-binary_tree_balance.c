#include "binary_trees.h"

/**
 * binary_tree_height - Mesure la hauteur d'un arbre binaire
 * @tree: Pointeur vers le nœud racine de l'arbre
 *
 * Return: La hauteur de l'arbre, ou 0 si l'arbre est NULL
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
 * binary_tree_balance - Mesure le facteur de balance d'un arbre binaire
 * @tree: Pointeur vers le nœud racine
 * de l'arbre pour mesurer le facteur de balance
 *
 * Return: Le facteur de balance, ou 0 si l'arbre est NULL
 */

	int binary_tree_balance(const binary_tree_t *tree)
	{
	int left_height = (int)binary_tree_height(tree->left);
	int right_height = (int)binary_tree_height(tree->right);

	if (tree == NULL)
		return (0);

	return (left_height - right_height);
	}
