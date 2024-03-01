#include "binary_trees.h"
#include <iostream>

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a leaf - 1.
 *         Otherwise - 0.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

int binary_tree_is_leaf(BinaryTreeNode* node) {
    if (node == nullptr) {
        std::cerr << "Error: Node is NULL.\n";
        return 0;
    }

    return (node->left == nullptr && node->right == nullptr) ? 1 : 0;
}
