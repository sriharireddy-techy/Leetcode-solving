class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        
        if (!root) return true;
        return isMirror(root->left, root->right);
    }

private:
    bool isMirror(TreeNode* t1, TreeNode* t2) {
        // Base case 1: Both nodes are null -> symmetric
        if (!t1 && !t2) return true;
        
        // Base case 2: Only one node is null -> asymmetric
        if (!t1 || !t2) return false;
        
        // Base case 3: Values mismatch -> asymmetric
        if (t1->val != t2->val) return false;

        // Check if the outer subtrees match AND the inner subtrees match
        return isMirror(t1->left, t2->right) && isMirror(t1->right, t2->left);
    }
};
