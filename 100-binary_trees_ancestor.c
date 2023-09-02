#include "binary_trees.h"

/**
* binary_trees_ancestor - finds the lowest common ancestor of two nodes
* @first: pointer to the first node
* @second: pointer to the second node
*
* Return: pointer to the lowest common ancestor node of the two given nodes
*/
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		     const binary_tree_t *second)
{
binary_tree_t *tmp;

if (first == NULL || second == NULL)
return (NULL);

/* Store the second node in a temporary variable */
tmp = (binary_tree_t *)second;

/* Traverse up the tree from the first node */
while (first)
{
/* Traverse up the tree from the second node */
while (second)
{
/* If we find a common ancestor, return it */
if (first == second)
return ((binary_tree_t *)first);
second = second->parent;
}

/* Reset the second node to its original value */
second = tmp;

/* Move up to the parent of the first node */
first = first->parent;
}

/* If no common ancestor is found, return NULL */
return (NULL);
}

