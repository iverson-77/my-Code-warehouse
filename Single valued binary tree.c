//µ¥Öµ¶ş²æÊ÷
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


bool isUnivalTree(struct TreeNode* root){
    if(root==NULL)
    {
        return true;
    }

    if(root->left&&root->left->val!=root->val)
    {
        return false;
    }
    if(root->right&&root->right->val!=root->val)
    {
        return false;
    }

    if(isUnivalTree(root->left)==false)
    {
        return false;
    }
        if(isUnivalTree(root->right)==false)
    {
        return false;
    }
    return true;
} 
