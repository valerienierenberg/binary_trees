#include "binary_trees.h"
/**
* binary_tree_insert_right - inserts a node as the right-child of another node
* @parent: pointer to the node to insert the left-child in
* @value: value to store in the new node
*
* Return: pointer to the created node, or NULL on failure or if parent is NULL
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *r_child; /* declare right child node variable */

	if (parent == NULL) /* if parent is NULL, return NULL, as per task desc. */
		return (NULL);

	r_child = binary_tree_node(parent, value); /* create right child node */
/* may need NULL check here? */
	if (r_child == NULL)
		return (NULL);

	r_child->right = parent->right; /* set r_child into same position as parent */

	if (r_child->right != NULL) /* check if right child node exists */
		r_child->right->parent = r_child;
/*
* ^ If parent already has a right-child, the new node must take its place,
* and the old right-child must be set as the right-child of the new node.
*/
	parent->right = r_child;
/*
* if parent didn't have right child already,
* then add our right-child on
*/
	return (r_child);
}
