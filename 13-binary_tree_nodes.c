#include "binary_trees.h"

/**
 * binary_tree_nodes - nodes counted with at least 1 child in binary tree
 * @tree: root node pointer of the tree to count the number of nodes
 * Return: funnction returns  0 if tree is NULL, else teturn node count
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
	nodes += (tree->left ||	tree->right) ? 1 : 0;
	nodes += binary_tree_nodes(tree->left);
	nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}

