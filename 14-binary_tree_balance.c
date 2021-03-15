#include "binary_trees.h"
/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure height
 * Return: if NULL return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_right;
	size_t h_left;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	h_left = binary_tree_height(tree->left) + 1;
	h_right = binary_tree_height(tree->right) + 1;

	if (h_right > h_left)
		return (h_right);
	else
		return (h_left);

}
/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the root node of the tree
 * Return: if NULL return 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t h_left = 0;
	size_t h_right = 0;
	int b_factor;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	h_left = binary_tree_height(tree->left);
	h_right = binary_tree_height(tree->right);
	b_factor = h_left - h_right;
	return (b_factor);
}
