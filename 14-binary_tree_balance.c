#include "binary_trees.h"

/**
* binary_tree_balance - Measures the balance factor of a binary tree.
*
* @tree: Pointer to the root node of the tree to measure the balance factor.
*
* Return: Balance factor of the binary tree. If tree is NULL, return 0.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

/* Calculate the height of the left and right subtrees */
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

/* Calculate the balance factor as the difference between heights */
return (left_height - right_height);
}

/**
* binary_tree_height - Measures the height of a binary tree.
*
* @tree: Pointer to the root node of the tree to measure the height.
*
* Return: Height of the binary tree. If tree is NULL, return 0.
*/
int binary_tree_height(const binary_tree_t *tree)
{
int left_height, right_height;

if (tree == NULL)
return (0);

/* Recursively calculate the height of the left and right subtrees */
left_height = binary_tree_height(tree->left);
right_height = binary_tree_height(tree->right);

/* Return the maximum height of the left or right subtree plus 1 (current level) */
return (1 + (left_height > right_height ? left_height : right_height));
}

