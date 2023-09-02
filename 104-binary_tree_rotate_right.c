#include "binary_trees.h"

/**
* binary_tree_rotate_right - Performs a right-rotation on a binary tree.
* @tree: Pointer to the root node of the tree to rotate.
*
* Return: Pointer to the new root node of the tree once rotated.
*/
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
binary_tree_t *new_root;

/* Check if the tree or its left child is NULL, rotation not possible */
if (tree == NULL || tree->left == NULL)
return (NULL);

/* Set new_root to the left child of the current root */
new_root = tree->left;

/* Update the left child of the current root */
tree->left = new_root->right;

/* Update the parent pointer of the right child of new_root */
if (new_root->right != NULL)
new_root->right->parent = tree;

/* Set the right child of new_root to be the original tree */
new_root->right = tree;

/* Update the parent pointers to maintain the tree structure */
new_root->parent = tree->parent;
tree->parent = new_root;

return (new_root);
}
