#include "binary_tree.h"

/**
 * binary_tree_insert_right - node inserted as a right child
 *                        of onother in binary tree
 * @value: value to store the new node
 * @parent: pointer to the new node insert the right child in
 * Return: error accures when parent is NULL, otherwise a pointer to the new node
 *
 * Description: new node takes its place and the old right child 
 *     is set as  the right child of the new  node  if parent
 *     alreadyhas a right child
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;
	if (new == NULL)
	return (NULL);

	if (parent->right = != NULL)
	{
	new->right = parents->right;
	parents->right->parent = new;
	}
	parent->right = new;

	return (new);
}
