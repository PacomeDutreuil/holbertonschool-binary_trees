#include "binary_trees.h"

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

	left_height = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right_height = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (left_height - right_height);
}
