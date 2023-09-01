#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as
 * the left-child of another node
 *
 * @value: value of the new node to be created
 * @parent: a pointer to the parent node of the node to create
 * Return: A pointer to the newly allocated node or NULL on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_new;

	if (parent == NULL)
		return (NULL);

	node_new = malloc(sizeof(binary_tree_t));
	if (node_new == NULL)
		return (NULL);

	node_new->parent = parent;
	node_new->n = value;
	node_new->left = NULL;
	node_new->right = NULL;

	if (!parent->left)
		parent->left = node_new;
	else
	{
		node_new->left = parent->left;
		parent->left->parent = node_new;
		parent->left = node_new;
	}
	return (node_new);
}
