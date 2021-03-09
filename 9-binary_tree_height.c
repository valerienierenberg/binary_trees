#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of binary tree or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree || (!(tree->left) && !(tree->right)))
		return (0);
	l = binary_tree_height(tree->left) + 1;
	r = binary_tree_height(tree->right) + 1;
	if (l > r)
		return (l);
	else
		return (r);
/* why do we need a null check for tree->left/right to get the right output */
}
