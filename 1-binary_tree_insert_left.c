#include "binary_trees.h"
#include <iostream>

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a left-child, the new node
 *              takes its place and the old left-child is set as
 *              the left-child of the new node.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

BinaryTreeNode* binary_tree_insert_left(BinaryTreeNode* parent, int value) {
    if (parent == nullptr) {
        std::cerr << "Error: Parent node is NULL.\n";
        return nullptr;
    }
    
    BinaryTreeNode* newNode = new BinaryTreeNode;
    if (newNode == nullptr) {
        std::cerr << "Error: Failed to create a new node.\n";
        return nullptr;
    }
    
    newNode->value = value;
    newNode->left = parent->left;
    newNode->right = nullptr;
    parent->left = newNode;
    
    return newNode;
}
