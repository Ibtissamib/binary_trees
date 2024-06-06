#include "binary_trees.h"
/**
  *binary_tree_insert_right-  inserts a node as the right
  *@parent: binary_tree_t *
  *@value: int
  *Return: binary_tree_t *
  */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right;

	if (parent == NULL)
		return (NULL);
	right = malloc(sizeof(binary_tree_t));
	if (right == NULL)
		return (NULL);
	right->n = value;
	right->left = NULL;
	right->parent = parent;
	if (parent->right == NULL)
		right->right = NULL;
	else
	{
		right->right = parent->right;
		parent->right->parent = right;
	}
	parent->right = right;
	return (right);
}
