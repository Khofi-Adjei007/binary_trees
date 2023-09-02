#include "binary_trees.h"

/**
* binary_tree_leaves - Counts the leaves in a binary tree.
*
* @tree: Pointer to the root node of the tree to count the leaves.
*
* Return: The number of leaves in the binary tree. If tree is NULL, return 0.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* Base case: if it's a leaf, return 1; otherwise, recursively count leaves */
if (tree->left == NULL && tree->right == NULL)
return (1);

size_t left_leaves = binary_tree_leaves(tree->left);
size_t right_leaves = binary_tree_leaves(tree->right);

return (left_leaves + right_leaves);
}
