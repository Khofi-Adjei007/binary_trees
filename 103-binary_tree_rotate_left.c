#include "binary_trees.h"

/**
* binary_tree_rotate_left - Performs a left-rotation on a binary tree.
* @tree: Pointer to the root node of the tree to rotate.
*
* Return: Pointer to the new root node of the tree once rotated.
*/
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
binary_tree_t *new_root;

/* Check if the tree or its right child is NULL, rotation not possible */
if (tree == NULL || tree->right == NULL)
return (NULL);

/* Set new_root to the right child of the current root */
new_root = tree->right;

/* Update the right child of the current root */
tree->right = new_root->left;

/* Update the parent pointer of the left child of new_root */
if (new_root->left != NULL)
new_root->left->parent = tree;

/* Set the left child of new_root to be the original tree */
new_root->left = tree;

/* Update the parent pointers to maintain the tree structure */
new_root->parent = tree->parent;
tree->parent = new_root;

return (new_root);
}
