#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through binary tree using in-order traversal
 * @tree: root pointer of the tree to traverse
 * @func: function pointer to call each node
 */
void binary_tree_inorder(const binary tree_t *tree, void (*func) (int))
{
	if (tree && func)
	{
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
	}
}
