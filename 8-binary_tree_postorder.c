#include "binary_trees.h"

/**
 * binary_tree_postorder -  a function that goes through a binary tree
 * using postorder traversal
 * @tree: a pointer to the node to check
 * @func: a pointer to a function to call for each node.
 * Return: Nothing, If tree or func is NULL, do nothing
 */

void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
