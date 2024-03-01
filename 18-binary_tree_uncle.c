#include "binary_trees.h"
#include <iostream>
/**
 * binary_tree_uncle - Finds the uncle of a node
 *                     in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * Return: If node is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* parent;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

BinaryTreeNode* binary_tree_uncle(BinaryTreeNode* node) {
    if (node == nullptr || node->parent == nullptr || node->parent->parent == nullptr) {
        return nullptr;
    }

    BinaryTreeNode* grandparent = node->parent->parent;

    if (grandparent->left == node->parent) {
        return grandparent->right;
    } else {
        return grandparent->left;
    }
}
