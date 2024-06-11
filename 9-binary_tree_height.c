# include "binary_trees.h"
/**
  *binary_tree_height- measures the height of a binary tree
  *@tree: const binary_tree_t *
  *Return: size_t
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (tree == NULL)
		return (0);
	l = bl(tree->left);
	r = br(tree->right);
	if (l > r)
		return (l);
	else
		return (r);
}
/**
  *bl- recursive
  *@tree: binary tree *
  *Return: size_t
  */
size_t bl(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + bl(tree->left));
}
/**
  *br- recursive
  *@tree: binary tree *
  *Return: size_t
  */

size_t br(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + bl(tree->right));
}

