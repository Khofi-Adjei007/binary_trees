#include "binary_trees.h"

/**
* binary_tree_postorder - Performs a post-order traversal of a binary tree.
*
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*
* Description:
* This function traverses the binary tree in post-order (left-right-root) and
* calls the provided function for each visited node. The value in each node
* is passed as a parameter to the given function.
*
* Return: No return value.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
/* Check if either the tree or func is NULL */
if (tree == NULL || func == NULL)
return;

/* Recursively traverse the left subtree */
binary_tree_postorder(tree->left, func);

/* Recursively traverse the right subtree */
binary_tree_postorder(tree->right, func);

/* Call the provided function for the current node */
func(tree->n);
}
