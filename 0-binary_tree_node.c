#include "binary_trees.h"

/**
 *binary_tree_node - a function that creates a tree node
 *@parent: pointer to the node print
 *@value: value to be printed
 *
 *Return: pointer to the new node otherwise NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *) malloc(sizeof(binary_tree_t));

	if (new_node == NULL)

		return (NULL);
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	new_node->n = value;

	return (new_node);
}
