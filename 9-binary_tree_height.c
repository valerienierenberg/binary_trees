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
/* returning either left_h or right_h as is gets 0, but returning either int + 1
like all the examples I've seen get one more than our example output (3, 2, 1
rather than 2, 1, 0)*/
}
