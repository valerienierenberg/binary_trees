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

/**
 * binary_tree_ancestor - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: 0 if node is NULL, parent is NULL, uncle is NULL or return uncle
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	if (!first || !second || !first->parent || !second->parent)
		return (NULL);
	if (first->parent == second)
		return ((binary_tree_t *)second);
	if (second->parent == first)
		return ((binary_tree_t *)first);
	if (first->parent == second->parent)
		return (first->parent);
	if (first->parent->parent->left == second || first->parent->parent->right == second)
		return (first->parent->parent);
	if (second->parent->parent->left == first || second->parent->parent->right == first)
		return (second->parent->parent);
	return (NULL);
}