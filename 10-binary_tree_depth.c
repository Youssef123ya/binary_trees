#include "binary_trees.h"
#include <iostream>
/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: A pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0, else return the depth.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

int binary_tree_depth(BinaryTreeNode* tree) {
    if (tree == nullptr) {
        return 0;
    }
    
    int depth = 0;
    BinaryTreeNode* current = tree;
    
    while (current != nullptr) {
        depth++;
        current = current->left;
    }
    
    return depth;
}
