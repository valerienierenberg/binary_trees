#include "binary_trees.h"
/**
* binary_tree_postorder - goes through a binary tree using post-order traversal
* @tree: pointer to the root node of the tree to traverse
* @func: pointer to a function to call for each node.
* (The value in the node must be passed as a parameter to this function.)
*
* Return: none
*/

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	if (tree->left)
		binary_tree_postorder(tree->left, func);
	if (tree->right)
		binary_tree_postorder(tree->right, func);
	func(tree->n);
}
