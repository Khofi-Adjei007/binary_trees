#include "binary_trees.h"

/**
* binary_tree_nodes - Counts nodes with at least one child in a binary tree.
*
* @tree: Pointer to the root node of the tree to count the nodes.
*
* Return: Number of nodes with at least one child. If tree is NULL, return 0.
*/
size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* Initialize the count to 0 */
size_t count = 0;

/* Check if the node has a left child */
if (tree->left != NULL)
count++;

/* Check if the node has a right child */
if (tree->right != NULL)
count++;

/* Recursively count nodes in the left and right subtrees */
count += binary_tree_nodes(tree->left);
count += binary_tree_nodes(tree->right);

return (count);
}

