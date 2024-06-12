# include "binary_trees.h"
/**
  *binary_tree_is_perfect- checks if tree is perfect
  *@tree: tree
  *Return: int
  */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_full(tree) == 1 && (size_t)((1 << inc(tree)) - 1) ==
			(binary_tree_size(tree)))
		return (1);
	return (0);
}
/**
  *binary_tree_size- measures the size
  *@tree: const binary_tree_t *
  *Return: size_t
  */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
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
/**
  *binary_tree_is_full- if tree is full
  *@tree: btree
  *Return: int
  */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
