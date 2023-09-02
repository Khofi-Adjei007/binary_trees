#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_tree_is_complete - Checks if a binary tree is complete.
* @tree: Pointer to the root node of the tree to check.
*
* Return: 1 if the tree is complete, 0 otherwise.
*/
int binary_tree_is_complete(const binary_tree_t *tree)
{
if (tree == NULL)
return (0);

/* Create a queue to store tree nodes */
binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);
if (queue == NULL)
return (0);

int front = 0, rear = 0;
binary_tree_t *current;

/* Enqueue the root node */
queue[rear++] = (binary_tree_t *)tree;

/* Perform level-order traversal */
while (front < rear)
{
current = queue[front++];

/* Check if we encounter a NULL node */
if (current == NULL)
{
/* Check if all remaining nodes are NULL */
while (front < rear)
{
if (queue[front++] != NULL)
{
    free(queue);
    return (0);
}
}
}
else
{
/* Enqueue the left child */
queue[rear++] = current->left;

/* Enqueue the right child */
queue[rear++] = current->right;
}
}

/* Free the queue when done */
free(queue);

return (1);
}
