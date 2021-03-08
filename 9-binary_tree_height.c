#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of binary tree or 0 if tree is null
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h, right_h;

	if (tree == NULL)
		return (0);
	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);
	if (left_h >= right_h)
		return (left_h + 1);
	else
		return (right_h + 1);
/* returning either left_h or right_h as is gets 0, but returning either int + 1
like all the examples I've seen get one more than our example output (3, 2, 1
rather than 2, 1, 0)*/
}
