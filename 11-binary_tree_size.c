#include "binary_trees.h"
#include <iostream>
/**
 * binary_tree_size - Measures the size of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

int binary_tree_size(BinaryTreeNode* tree) {
    if (tree == nullptr) {
        return 0;
    }
    
    return 1 + binary_tree_size(tree->left) + binary_tree_size(tree->right);
}
