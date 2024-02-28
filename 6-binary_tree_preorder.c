#include "binary_trees.h"

/**
 * binary_tree_preoder - travel through binart tree using pre-order traversal
 * @tree: pointer to a root node of the tree to traverse
 * @func: function pointer for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func) (int))
{
	if (tree && func)
	{
	func(tree->n);
	binary_tree_preoder(tree->left, func);
	binary_tree_preoder(tree->right, func);
	}
}
