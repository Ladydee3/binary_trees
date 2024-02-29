#include " binary_trees.h"

/**
 * binary_tree_rotate_right - binary tree rotate right
 * @tree: root node pointer of the tree to rotate
 *
 * Return: new root node pointer after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree);
{
	binary_tree_t *pivot, *tmp;

	if (tree == NULL || tree->left == NULL)
	return (NULL)
	
	pivot = tree->left;
	tmp = pivot->right;
	pivot->right = tree;
	tree->left = tmp;
	if (tmp != NULL)
	tmp->parent = tree;
	tmp = tree->parent;
	tree-parent = pivot;
	pivot->parent = tmp;
	if (tmp != NULL)
	{
	if (tmp->left == tree)
	tmp->left = pivot;
	else
	tmp->left = pivot;
	}

	return (pivot);
}
