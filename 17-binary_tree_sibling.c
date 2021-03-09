#include "binary_trees.h"
/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: pointer to the node to find the sibling
 *
 * Return: 0 if node is NULL, parent is NULL, or node has no sibling
 * Otherwise, return the value of the sibling node
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL); /* if node or parent is NULL */

	if (node->parent->right == NULL || node->parent->left == NULL)
		return (NULL); /* if node has no sibling */

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);

	return (NULL);
}
