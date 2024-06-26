#include "binary_trees.h"
/**
 * binary_tree_is_root - function that checks if a given node is a root.
 * @node: the pointer  to the node to check.
 * Return: If the node is a root - 1.
 *         Otherwise - 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
