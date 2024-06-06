# include "binary_trees.h"
/**
  *binary_tree_insert_left- inserts the left-child of another node
  *@parent: binary_tree_t *
  *@value: int
  *Return:  binary_tree_t *
  */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	 binary_tree_t *left = malloc(sizeof(binary_tree_t));

	 if (left == NULL || parent == NULL)
		 return (NULL);
	 left->n = value;
	 left->right = NULL;
	 if (parent->left == NULL)
		 left->left = NULL;
	 else
		 left->left = parent->left;
	 parent->left = left;
	 return (left);
}
