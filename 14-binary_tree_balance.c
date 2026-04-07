#include "binary_trees.h"

/**
 * height - measures height of a binary tree
 * @tree: pointer to the node
 *
 * Return: height
 */
static int height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left = height(tree->left);
	right = height(tree->right);

	if (left > right)
		return (left + 1);

	return (right + 1);
}

/**
 * binary_tree_balance - measures the balance factor
 * @tree: pointer to the root node
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = tree->left ? height(tree->left) + 1 : 0;
	right_height = tree->right ? height(tree->right) + 1 : 0;

	return (left_height - right_height);
}
