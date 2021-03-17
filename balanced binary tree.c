//判断一棵树是否为平衡二叉树（ 一个二叉树每个节点 的左右两个子树的高度差的绝对值不超过 1 ）
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

int max(int x,int y)
{
    return x>y?x:y;
}
int maxDepth(struct TreeNode* root){
    if(root==NULL)
    {
        return 0;
    }

    return max(maxDepth(root->left),maxDepth(root->right))+1;
}
bool isBalanced(struct TreeNode* root){
    if(root==NULL)
    {
        return true;
    }
    int leftsize=maxDepth(root->left);
    int rightsize=maxDepth(root->right);

    int k=abs(leftsize-rightsize);
    if(k<2)
    {
        return 1&& isBalanced(root->left)&& isBalanced(root->right);
    }
    else
    return false;
}
