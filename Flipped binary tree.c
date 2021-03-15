//·­×ª¶þ²æÊ÷
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

struct TreeNode* invertTree(struct TreeNode* root){
  /*  if(root==NULL||(root->left==NULL&&root->right==NULL))
    {
        return root;
    }
    
    struct TreeNode* tmp=root->left;
    root->left=root->right;
    root->right=tmp;
    invertTree(root->left);
    invertTree(root->right);
    return root;*/
    if(root==NULL)
    {
        return NULL;
    }
    struct TreeNode* tmp=root->left;
    root->left=invertTree(root->right);
    root->right=invertTree(tmp);
    return root;
} 
