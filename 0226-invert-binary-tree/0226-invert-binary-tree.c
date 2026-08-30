struct TreeNode* invertTree(struct TreeNode* root) {
    if (root == NULL) {
        return NULL;
    }

    // Swap left and right
    struct TreeNode* temp = root->left;
    root->left = root->right;
    root->right = temp;

    // Invert left subtree
    invertTree(root->left);

    // Invert right subtree
    invertTree(root->right);

    return root;
}