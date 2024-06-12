# include "binary_trees.h"
/**
  *binary_tree_balance- measures the balance factor
  *@tree: const binary_tree_t *
  *Return: int
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int n;

	if (tree == NULL)
		return (0);
	if (binary_tree_height(tree->left) >= binary_tree_height(tree->right))
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	n = binary_tree_height(tree->right) - binary_tree_height(tree->left);
	return (-n);
}
/**
  *binary_tree_height- measures the height of a binary tree
  *@tree: const binary_tree_t *
  *Return: size_t
  */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (inc(tree) - 1);
}
/**
  *inc-function
  *@tree: binary tree
  *Return: height + 1
  */
size_t inc(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (inc(tree->left) > inc(tree->right))
		return (inc(tree->left) + 1);
	else
		return (inc(tree->right) + 1);
}
