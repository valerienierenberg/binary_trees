#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL, otherwise number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
        return (0);
	if (!(tree->left) && !(tree->right))
		return (0);
	else
		return (binary_tree_nodes(tree->left) + 1 + binary_tree_nodes(tree->right));
}