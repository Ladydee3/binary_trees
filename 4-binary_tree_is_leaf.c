#include "binary_trees.h"

/**
 * binary_tree_is _leaf - checks if a node is a leaf of a binart tree
 * @node: node to chech pointer
 *
 * Return: 1 ifnode is a leaf , else 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
	return (0);

	return (1)
}
