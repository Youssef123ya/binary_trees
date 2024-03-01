#include "binary_trees.h"
#include <iostream>
/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: A pointer to the root node of the tree to traverse.
 * @func: A pointer to a function to call for each node.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

void binary_tree_postorder(BinaryTreeNode* tree, void (*func)(BinaryTreeNode*)) {
    if (tree == nullptr) {
        return;
    }
    
    binary_tree_postorder(tree->left, func); // Recursively traverse the left subtree
    binary_tree_postorder(tree->right, func); // Recursively traverse the right subtree
    func(tree); // Call function for the current node
}
