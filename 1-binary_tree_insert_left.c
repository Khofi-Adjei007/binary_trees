#include "binary_trees.h" /* Include the necessary header file */
#include <stdlib.h>       /* Include the standard library for malloc */

/**
* binary_tree_node - Creates a binary tree node.
*
* @parent: Pointer to the parent node of the new node to create.
* @value: The integer value to store in the new node.
*
* Description:
* This function creates a new binary tree node with the specified parent
* node and integer value.
*
* Return: A pointer to the newly created binary tree node, or NULL on failure.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new_node; /* Declare a pointer to a binary tree node */

/* Allocate memory for the new node using malloc */
new_node = malloc(sizeof(binary_tree_t));
if (new_node == NULL) /* Check if malloc was successful */
return (NULL);    /* Return NULL if memory allocation fails */

/* Initialize the new node with the provided values */
new_node->parent = parent;               /* Set the parent pointer */
new_node->n = value;                     /* Set the value stored in the node */
new_node->left = new_node->right = NULL;
/* Initialize left and right children */

return (new_node); /* Return a pointer to the newly created node */
}
