#include "binary_trees.h"

/**
* bst_search - Searches for a value in a Binary Search Tree (BST).
* @tree: Pointer to the root node of the BST to search.
* @value: Value to search for in the tree.
*
* Return: A pointer to the node containing a value equal to `value`, or NULL
*         if tree is NULL or if the value is not found in the tree.
*/
bst_t *bst_search(const bst_t *tree, int value)
{
if (tree == NULL)
return (NULL);

while (tree)
{
if (tree->n == value)
return ((bst_t *)tree);

if (tree->n > value)
tree = tree->left;
else
tree = tree->right;
}

return (NULL);
}
