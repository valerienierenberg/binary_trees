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

	if (!tree)
		return (0);
	l = binary_tree_height(tree->left) + 1;
	r = binary_tree_height(tree->right) + 1;
	if (l > r)
		return (l);
	else
		return (r);
/* why do we need a null check for tree->left/right to get the right output */
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL, or return difference of left / right
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l, r;

	if (!tree  || (!(tree->left) && !(tree->right)))
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	return (l - r);
}
