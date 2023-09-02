#include "binary_trees.h"
#include <stdio.h>
#include <stdlib.h>

/**
* binary_tree_levelorder - Performs level-order traversal of a binary tree.
* @tree: Pointer to the root node of the tree to traverse.
* @func: Pointer to a function to call for each node.
*/
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
if (tree == NULL || func == NULL)
return;

/* Create a queue to store tree nodes */
binary_tree_t **queue = malloc(sizeof(binary_tree_t *) * 1024);
if (queue == NULL)
return;

int front = 0, rear = 0;
binary_tree_t *current;

/* Enqueue the root node */
queue[rear++] = (binary_tree_t *)tree;

/* Perform level-order traversal */
while (front < rear)
{
current = queue[front++];
func(current->n);  /* Call the provided function for the current node */

/* Enqueue the left child if it exists */
if (current->left)
queue[rear++] = current->left;

/* Enqueue the right child if it exists */
if (current->right)
queue[rear++] = current->right;
}

/* Free the queue when done */
free(queue);
}

