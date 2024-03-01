#include "binary_trees.h"
#include <iostream>
/**
 * binary_tree_sibling - Finds the sibling of a
 *                       node in a binary tree.
 * @node: A pointer to the node to find the sibling of.
 *
 * Return: If node is NULL or there is no sibling - NULL.
 *         Otherwise - a pointer to the sibling.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

BinaryTreeNode* binary_tree_sibling(BinaryTreeNode* node) {
    if (node == nullptr || node->parent == nullptr) {
        return nullptr;
    }
    
    if (node->parent->left == node) {
        return node->parent->right;
    } else {
        return node->parent->left;
    }
}
