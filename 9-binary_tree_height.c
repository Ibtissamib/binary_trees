# include "binary_trees.h"
/**
  *binary_tree_height- measures the height of a binary tree
  *@tree: const binary_tree_t *
  *Return: size_t
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t r, l;

	if (tree == NULL)
		return (0);
	l = binary_tree_height(tree->left);
	r = binary_tree_height(tree->right);
	if (l > r)
		return (l);
	else
		return (r);
}

