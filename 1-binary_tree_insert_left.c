# include "binary_trees.h"
/**
  *binary_tree_insert_left- inserts the left-child of another node
  *@parent: binary_tree_t *
  *@value: int
  *Return:  binary_tree_t *
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left;

	if (parent == NULL)
		return (NULL);
	left = malloc(sizeof(binary_tree_t));
	if (left == NULL)
		return (NULL);
	left->n = value;
	left->right = NULL;
	left->parent = parent;
	if (parent->left != NULL)
	{
		left->left = parent->left;
		parent->left->parent = left;
	}
	else
		left->left = NULL;
	parent->left = left;
	return (left);
}
