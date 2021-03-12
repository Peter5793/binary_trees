#include "binary_trees.h"
/**
 * binary_tree_insert_left - function that inserts a node as the left child
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the new node
 * Return: return a pointer to the created node or NULL on failure if parent is 
 * NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;
	
	if (parent == NULL)
		return (NULL);

	n_node = malloc(sizeof(binary_tree_t));
	if (n_node == NULL)
		return (NULL);

	n_node->left = NULL;
	n_node->right = NULL;

	if (parent->left != NULL)
	{
		n_node->left = parent->left;
		parent->left->parent = n_node;
		parent->left = n_node;
	}
	else
		parent->left = n_node;
	
	n_node->parent = parent;
	n_node->n = value;
	return (n_node);
}
