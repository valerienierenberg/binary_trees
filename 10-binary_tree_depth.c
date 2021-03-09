#include "binary_trees.h"

/**
 * binary_tree_depth - func that measures the depth of a node in a binary tree
 * @tree: pointer to the node to be measured for depth
 *
 * Return: depth of a node or 0 if tree is null
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth;

	if (!tree)
	    return (0);
    for (depth = 0; tree->parent; tree = tree->parent, depth++)
        ;
    return (depth);
}
