#include "binary_trees.h"
#include <iostream>
#include <algorithm>
/**
 * binary_tree_height - Measures the height of a binary tree.
 * @tree: A pointer to the root node of the tree to measure the height.
 *
 * Return: If tree is NULL, your function must return 0, else return height.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

int binary_tree_height(BinaryTreeNode* tree) {
    if (tree == nullptr) {
        return 0;
    }
    
    int left_height = binary_tree_height(tree->left);
    int right_height = binary_tree_height(tree->right);
    
    return 1 + std::max(left_height, right_height);
}
