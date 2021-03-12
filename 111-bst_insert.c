#include "binary_trees.h"

/**
 * createNode - creates a new node
 * @key: value to create the node with
 *
 * Return: new node
*/

bst_t *createNode(int key)
{
	bst_t *newNode = (bst_t *)malloc(sizeof(bst_t));

	newNode->n = key;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}

/**
 * bst_insert - function that inserts a value in a Binary Search Tree
 * @tree: double pointer to the root node of the BST to insert the value
 * @value: to store in the node to be inserted
 *
 * Return: pointer to the created node, or NULL on failure
 */

bst_t *bst_insert(bst_t **tree, int value)
{
	if (tree == NULL)
	{
		(*tree) = createNode(value);
	}
	else
	{
		if ((*tree)->n > value)
		{
			(*tree)->left = bst_insert((*tree)->left, value);
		}
		else
		{
			(*tree)->right = bst_insert((*tree)->right, value);
		}
	}
	return (*tree);
}
