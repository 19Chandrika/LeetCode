bool isSameTree(struct TreeNode* p, struct TreeNode* q) {
    // Both are empty
    if (p == NULL && q == NULL) {
        return true;
    }

    // One is empty and the other is not
    if (p == NULL || q == NULL) {
        return false;
    }

    // Values are different
    if (p->val != q->val) {
        return false;
    }

    // Check left and right subtrees
    return isSameTree(p->left, q->left) &&
           isSameTree(p->right, q->right);
}