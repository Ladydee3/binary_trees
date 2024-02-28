#include "binary_trees.h"

/**
 * binary_tree_postorder - traverses binary tree using post-order traversal
 * @tree: root node pointer to traverse
 * @func: function pointer to call each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree && func)
	{
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
	}
}
