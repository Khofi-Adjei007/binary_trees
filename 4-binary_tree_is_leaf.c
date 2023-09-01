#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf.
 *
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf, 0 otherwise.
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
    /* Check if the node is NULL */
    if (node == NULL)
        return (0);

    /* Check if both left and right children are NULL, indicating a leaf */
    return (node->left == NULL && node->right == NULL);
}
