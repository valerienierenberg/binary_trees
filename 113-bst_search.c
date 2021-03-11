#include "binary_trees.h"

bst_t *bst_search(const bst_t *tree, int value)
{
    if (tree == NULL)
        return (NULL);

    if (tree->n == value)
       return (NULL);

    if (tree->n < value)
       return bst_search(tree->right, value);
 
    return bst_search(tree->left, value);
}
