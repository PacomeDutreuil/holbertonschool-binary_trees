#include "binary_trees.h"

/**
 * height - measures height
 */
static int height(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (-1);

	left = height(tree->left);
	right = height(tree->right);

	return ((left > right ? left : right) + 1);
}

/**
 * size - counts nodes
 */
static int size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + size(tree->left) + size(tree->right));
}

/**
 * binary_tree_is_perfect - checks if tree is perfect
 * @tree: pointer to root
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int h, s, expected;

	if (tree == NULL)
		return (0);

	h = height(tree);
	s = size(tree);

	expected = (1 << (h + 1)) - 1;

	return (s == expected);
}
