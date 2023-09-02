#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 *
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * Return: Pointer to the lowest common ancestor node.
 * If no common ancestor was found, return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    if (first == NULL || second == NULL)
        return NULL;

    if (first == second)
        return (binary_tree_t *)first;

    /* Recursively search for common ancestor in the left and right subtrees */
    binary_tree_t *left_ancestor = binary_trees_ancestor(first, second->parent);
    binary_tree_t *right_ancestor = binary_trees_ancestor(first->parent, second);

    if (left_ancestor && right_ancestor)
        return (binary_tree_t *)second;

    return left_ancestor ? left_ancestor : right_ancestor;
}
