#include "binary_trees.h"

/**
* binary_tree_height - Measures the height of a binary tree.
* @tree: A pointer to the root node of the tree to measure the height of.
*
* Return: The height of the tree. If tree is NULL, return 0.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
size_t left_height = 0, right_height = 0;

if (tree == NULL)
return (0);

if (tree->left)
left_height = 1 + binary_tree_height(tree->left);
if (tree->right)
right_height = 1 + binary_tree_height(tree->right);

return (left_height > right_height ? left_height : right_height);
}

/**
* bal_avl - Checks if a binary tree is a valid AVL tree.
* @tree: A pointer to the root node of the tree to check.
* @lower: The lower bound of valid values.
* @high: The upper bound of valid values.
*
* Return: 1 if tree is AVL, 0 if not.
*/
int bal_avl(const binary_tree_t *tree, int lower, int high)
{
size_t height_left, height_right, balance_factor;

if (tree != NULL)
{
if (tree->n > high || tree->n < lower)
return (0);

height_left = binary_tree_height(tree->left);
height_right = binary_tree_height(tree->right);
balance_factor = height_left > height_right ?
	height_left - height_right : height_right - height_left;

if (balance_factor > 1)
return (0);

return (bal_avl(tree->left, lower, tree->n - 1) &&
bal_avl(tree->right, tree->n + 1, high));
}
return (1);
}

/**
* binary_tree_is_avl - Checks if a binary tree is a valid AVL tree.
* @tree: A pointer to the root node of the tree to check.
*
* Return: 1 if tree is AVL, 0 if not.
*/
int binary_tree_is_avl(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

return (bal_avl(tree, INT_MIN, INT_MAX));
}

