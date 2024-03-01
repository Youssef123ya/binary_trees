#include "binary_trees.h"
#include <iostream>

/**
 * binary_tree_insert_right - Insert a node as the right-child
 *                            of another in a binary tree.
 * @parent: A pointer to the node to insert the right-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 *
 * Description: If parent already has a right-child, the new node
 *              takes its place and the old right-child is set as
 *              the right-child of the new node.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

BinaryTreeNode* binary_tree_insert_right(BinaryTreeNode* parent, int value) {
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
    newNode->left = nullptr;
    newNode->right = parent->right;
    parent->right = newNode;
    
    return newNode;
}
