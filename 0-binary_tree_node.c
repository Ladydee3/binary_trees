#include "binary_trees.h"

/**
 * binary_tree_node - Create a binary node
 * @value: a value to ut in the new node
 * @parent: pointer to the parent of te node
 *
 * Return: NULL if an error accures
 *         otherwise pointer to the new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
	return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
