#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of the  node
 * @node: pointer to the node to find the uncle
 * Return: if node is NULL return NULL,no uncle return NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (0);
	if (node->parent == node->parent->parent->left)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
