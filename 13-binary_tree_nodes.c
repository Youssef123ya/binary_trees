#include "binary_trees.h"
#include <iostream>
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * Return: If tree is NULL, the function must return 0, else return node count.
 */
struct BinaryTreeNode {
    int value;
    BinaryTreeNode* left;
    BinaryTreeNode* right;
};

int binary_tree_nodes(BinaryTreeNode* tree) {
    if (tree == nullptr) {
        return 0;
    }
    
    if (tree->left == nullptr && tree->right == nullptr) {
        return 0;
    }
    
    return 1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);
}
