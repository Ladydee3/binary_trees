#include "biary_trees.h"

/**
 * binary_tree_insert_left - insert a node as a left child
 *                          of onother in a binary tree
 * @value: value to store the new node
 * @parent: pointer to the node to insert the left child in 
 *
 * Return: error accures if parent is NULL, otherwise  pointer to the new node
 *
 * Description: if parent already has a left child, the new 
 *  node take its place and the old left childis as set
 *    the left child of the new node
 */
binary_tree_t *binary_ tree_insert_letf(binary_tree_t *parent , int value)
{
	binary_tree_t *new;

	if (parent == NULL)
	return (NULL)

	if (parent->left != NULL)
	{
	new->left = parent->left;
	parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
