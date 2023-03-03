#include "binary_trees.h"
/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 *
 * @parent: Pointer to the node to insert the right-child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;
	binary_tree_t *right_child;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_node = binary_tree_node(parent, value);

	if (n_node == NULL)
	{
		return (NULL);
	}

	right_child = parent->right;
	parent->right = n_node;

	if (right_child != NULL)
	{
		n_node->right = right_child;
		right_child->parent = n_node;
	}

	return (n_node);
}
