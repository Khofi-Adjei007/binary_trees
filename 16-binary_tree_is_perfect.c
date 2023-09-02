#include "binary_trees.h"

/**
* check_perfect - Helper function to recursively check if the tree is perfect.
*
* @node: Pointer to the current node to check.
* @depth: Current depth in the tree.
* @leaf_depth: Depth of the leaf nodes.
*
* Return: 1 if the tree is perfect, 0 otherwise.
*/
static int check_perfect(const binary_tree_t *node, int depth, int leaf_depth)
{
if (node == NULL)
return (depth);

depth++;

/* Check if the node is a leaf node */
if (node->left == NULL && node->right == NULL)
{
/* If leaf_depth is not set, set it to the current depth */
if (leaf_depth == -1)
leaf_depth = depth;
/* If the leaf_depth is not equal to the current depth, it's not perfect */
if (leaf_depth != depth)
return (0);
}

/* Recursively check left and right subtrees */
int left_depth = check_perfect(node->left, depth, leaf_depth);
int right_depth = check_perfect(node->right, depth, leaf_depth);

/* If either subtree is not perfect, return 0 */
if (left_depth == 0 || right_depth == 0)
return (0);

/* If the left and right depths are equal, return the depth, else 0 */
return (left_depth == right_depth ? left_depth : 0);
}

/**
* binary_tree_is_perfect - Checks if a binary tree is perfect.
*
* @tree: Pointer to the root node of the tree to check.
*
* Return: 1 if the tree is perfect, 0 otherwise. If tree is NULL, return 0.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* Call the helper function starting from the root */
return (check_perfect(tree, 0, -1) != 0);
}

