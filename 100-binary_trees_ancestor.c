#include "binary_trees.h"

/**
 * binary_trees_ancetor - finds the lowestvcommon ancestor of two nodes
 * @first: first node pointer
 * @second: second node pointer
 *
 * Return: NULL if no common ancestor, else return common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *mom, *pop;

	if (!first || !second)
	return (Null);
	if (first == second)
	return ((binary_tree_t *)first);

	mom = first->parent, pop = second->parent;
	if (first == pop || !mom || (!mom->parent && pop))
	return (binary_tree_ancestor(first, pop));
	else if (mom == ssecond || !pop || (!pop->parent && mom))
	return (binary_trees_ancestor(mom, second));
	return (binary_tree_ancestor(mom, pop));
}
