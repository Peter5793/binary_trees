#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: if tree is NULL function must return 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int d = depth(tree);

	if (!tree)
		return (0);

	if (is_perfect(tree, d, 0))
	return (1);
	return (0);
}
/**
 * depth - calculate the depth of the tree
 * @node: specific node of the tree
 * Return: the depth of the tree
 */
int depth(const binary_tree_t *node)
{
	int d = 0;

	while (node != NULL)
	{
		d++;
		node = node->left;
	}
	return (d);
}
/**
 * is_perfect - check if the tree is perfect
 * @d: depth of the tree
 * @tree: pointer to the root node of the tree
 * @level: level of the tree
 * Return: if function is NULL return 0
 */
int is_perfect(const binary_tree_t *tree, int d, int level)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (d == level + 1);
	if (!tree->left || !tree->right)
		return (1);
	return (is_perfect(tree->left, d, level + 1) &&
		is_perfect(tree->right, d, level + 1));
}
