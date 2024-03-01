#include "binary_trees.h"
#include <iostream>

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

BinaryTreeNode* binary_tree_node(BinaryTreeNode* parent, int value) {
    BinaryTreeNode* newNode = new BinaryTreeNode;
    if (newNode == nullptr) {
        std::cerr << "Error: Failed to create a new node.\n";
        return nullptr;
    }

    newNode->value = value;
    newNode->left = nullptr;
    newNode->right = nullptr;

    if (parent != nullptr) {
        if (value < parent->value) {
            parent->left = newNode;
        } else {
            parent->right = newNode;
        }
    }

    return newNode;
}
