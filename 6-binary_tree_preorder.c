#include "binary_trees.h"

/**
 * binary_tree_preorder - Performs a pre-order traversal of a binary tree.
 *
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description:
 * This function traverses the binary tree in pre-order (root-left-right) and
 * calls the provided function for each visited node. The value in each node
 * is passed as a parameter to the given function.
 *
 * Return: No return value.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
    /* Check if either the tree or func is NULL */
    if (tree == NULL || func == NULL)
        return;

    /* Call the provided function for the current node */
    func(tree->n);

    /* Recursively traverse the left subtree */
    binary_tree_preorder(tree->left, func);

    /* Recursively traverse the right subtree */
    binary_tree_preorder(tree->right, func);
}
