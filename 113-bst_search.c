#include "binary_tree.h"

/**
 * bst_search - value in binary search searched
 * @tree: root node pointer of the BST to search
 * @value: value to search for in BST
 *
 * Return: if tree is NULL or value is not found, NULL
 *          otherwise pointer to the node cointaing value
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree != NULL)
	{
	if (tree->n == value)
	return ((bst_t *)tree);
	if (tree->n > value)
	return (bst_search(tree->left, value));
	return (bst_search(tree->right, value));
	}
	return (NULL);
}
