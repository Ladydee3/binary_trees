#include "binary_trees.h"

/**
 * binary_tree_siblings - find the siblingsof a node in binary tree
 * @node: node pointer to find sibling of
 *
 * Return: no sibling if node is NULL, otherwise a pointer to sibling
 */
binary_tree_t *binary_tree_siblings(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
	return (NULL);
	if (node->parent->left == node)
	return (node->parent->right);
	return (node->parent->left);
}
