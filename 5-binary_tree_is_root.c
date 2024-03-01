#include "binary_trees.h"
#include <iostream>
/**
 * binary_tree_is_root - Checks if a node is a root of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node is a root - 1.
 *         Otherwise - 0.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

int binary_tree_is_root(BinaryTreeNode* node) {
    return (node != nullptr && (node->left == nullptr && node->right == nullptr)) ? 1 : 0;
}
