//给你二叉树的根节点 root ，返回它节点值的 前序 遍历。
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int TreeSize(struct TreeNode* root)
{
    if(root==NULL)
    {
        return 0;
    }
    return TreeSize(root->left)+TreeSize(root->right)+1;
}

void _preorder(struct TreeNode* root,int *arr,int* pi)
{
    if(root==NULL)
    {
        return;
    }
    arr[(*pi)++]=root->val;
    _preorder(root->left,arr,pi);
    _preorder(root->right,arr,pi);
}

int* preorderTraversal(struct TreeNode* root, int* returnSize){
    *returnSize=TreeSize(root);
    int* arr=(int*)malloc(*returnSize*sizeof(int));
    int i=0;
    _preorder(root,arr,&i);
    return arr;
}
