#ifndef RECCHECK
//if you want to add any #includes like <iostream> you must do them here (before the next endif)

#endif

#include "equal-paths.h"
using namespace std;


// You may add any prototypes of helper functions here
int getHeight(Node* node){
    if (node == NULL){
        return 0;
    }
    int leftH = getHeight(node->left);
    int rightH = getHeight(node->right);
    if(leftH > rightH) return 1 + leftH;
    else return 1 + rightH;
}


bool equalPaths(Node* root) {
    // Base case: an empty tree has paths of equal length
    if (root == NULL) {
        return true;
    }

    // Check if the node is a leaf
    if (root->left == NULL && root->right == NULL) {
        return true;
    }

    // Check if only one subtree exists
    if (root->left == NULL || root->right == NULL) {
        return equalPaths(root->left) && equalPaths(root->right);
    }

    // Recursively check if the left and right subtrees have paths of equal length
    bool leftEqual = equalPaths(root->left);
    bool rightEqual = equalPaths(root->right);

    // If the left or right subtree has a different path length, return false
    if (getHeight(root->left) != getHeight(root->right)) {
        return false;
    }

    // Return true only if both subtrees have paths of equal length
    return leftEqual && rightEqual;
}

