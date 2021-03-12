#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node
 * @value: data to store
 * Return: pointer to the new node or NULL if fails
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node = NULL;
	//Allocate memory for new node

	n_node = malloc(sizeof(binary_tree_t));
	//if root is nulle the assingn new node
	if (n_node == NULL)
		return (NULL);
       // Assign parent node
	n_node->parent = parent;
	n_node->left = NULL;
	n_node->right = NULL;
	//assign value to this node
	n_node->n = value;

	return (n_node);
}
