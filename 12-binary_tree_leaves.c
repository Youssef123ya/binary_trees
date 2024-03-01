#include "binary_trees.h"
#include <iostream>
/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 *
 * Return: The number of leaves in the tree.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

int binary_tree_leaves(BinaryTreeNode* tree) {
    if (tree == nullptr) {
        return 0;
    }
    
    if (tree->left == nullptr && tree->right == nullptr) {
        return 1;
    }
    
    return binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);
}
