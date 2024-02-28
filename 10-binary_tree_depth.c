#include "binary_trees.h"

/**
 * binary_tree_depth - depth of node measured in binary tree
 * @tree: node pointer to easure te depth
 *
 * Return: function returns 0 if tree is NULL, else return the dept
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
