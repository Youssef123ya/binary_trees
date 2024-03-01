#include "binary_trees.h"
#include <iostream>
/**
 * binary_tree_delete - Deletes a binary tree.
 * @tree: A pointer to the root node of the tree to delete.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

void binary_tree_delete(BinaryTreeNode* tree) {
    if (tree == nullptr) {
        return; // Nothing to delete
    }
    
    binary_tree_delete(tree->left); // Recursively delete the left subtree
    binary_tree_delete(tree->right); // Recursively delete the right subtree
    
    delete tree; // Delete the current node
}
