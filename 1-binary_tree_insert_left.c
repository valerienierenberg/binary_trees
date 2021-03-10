#include "binary_trees.h"
/**
* binary_tree_insert_left - inserts a node as the left-child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
*
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *l_child; /* declare left child node variable */

	if (parent == NULL) /* if parent is NULL, return NULL, as per task desc. */
		return (NULL);

	l_child = binary_tree_node(parent, value); /* create left child node */
/* may need NULL check here? */
	if (l_child == NULL)
		return (NULL);

	l_child->left = parent->left; /* set l_child into same position as parent */

	if (l_child->left != NULL) /* check if left child node exists */
		l_child->left->parent = l_child;
/*
* ^ If parent already has a left-child, the new node must take its place,
* and the old left-child must be set as the left-child of the new node.
*/
	parent->left = l_child;
/*
* if parent didn't have left child already,
* then add our left-child on
*/
	return (l_child);
}
