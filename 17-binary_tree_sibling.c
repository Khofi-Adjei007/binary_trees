#include "binary_trees.h"

/**
* binary_tree_sibling - Finds the sibling of a node in a binary tree.
*
* @node: Pointer to the node to find the sibling of.
*
* Return: Pointer to the sibling node. If node is NULL or has no sibling,
* return NULL. If the parent is NULL, return NULL.
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
if (node == NULL || node->parent == NULL)
return (NULL);

/* Check if the node is the left child, return the right child if exists */
if (node->parent->left == node)
return (node->parent->right);

/* Check if the node is the right child, return the left child if exists */
if (node->parent->right == node)
return (node->parent->left);

return (NULL); /* Node is not a child of its parent */
}
