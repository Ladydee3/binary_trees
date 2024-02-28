i#include "binary_trees.h"

/**
 * binary_tree_height - height of binary tree  measured
 * @tree: root node pointer of the tree to measure the height
 *
 * Return: function returns 0 if tree is NULL, else return height
 */size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
	size_t = 1 = 0, r = 0;
	
	1 = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return ((1 > r) ? 1 : r);
	}
	return (0);
}
