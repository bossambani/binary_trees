#include "binary_trees.h"
/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: pointer to the root node of the tree
 *Return: 0 if tree in NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_subtree_height, right_subtree_height;

	if (tree == NULL)
		return (-1);
	left_subtree_height = binary_tree_height(tree->left);
	right_subtree_height = binary_tree_height(tree->right);

	if (left_subtree_height > right_subtree_height)
		return (left_subtree_height + 1);
	else
		return (right_subtree_height + 1);
}
