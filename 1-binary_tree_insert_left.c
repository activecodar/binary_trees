#include "binary_trees.h"
/**
* binary_tree_insert_left - Inserts a node as the left-child of another node
* @parent: Pointer to the node to insert the left-child in
* @value: Value to store in the new node
*
* Return: Pointer to the created node, or NULL
*/

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *n_node;
	binary_tree_t *left_child;

	if (parent == NULL)
	{
		return (NULL);
	}

	n_node = binary_tree_node(parent, value);

	if (n_node == NULL)
	{
		return (NULL);
	}

	left_child = parent->left;
	parent->left = n_node;

	if (left_child != NULL)
	{
		n_node->left = left_child;
		left_child->parent = n_node;
	}

	return (n_node);
}
