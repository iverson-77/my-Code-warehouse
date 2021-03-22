/*给定两个非空二叉树 s 和 t，检验?s 中是否包含和 t 具有相同结构和节点值的子树。
s 的一个子树包括 s 的一个节点和这个节点的所有子孙。s 也可以看做它自身的一棵子树。*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

bool isSameTree(struct TreeNode* p, struct TreeNode* q){
    if(p==NULL&&q==NULL)
    {
        return true;
    }
    if((p==NULL&&q!=NULL)||(q==NULL&&p!=NULL))
    {
        return false;
    }
    if(p->val==q->val)
    {
        return true&&isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
    return false;
}

bool isSubtree(struct TreeNode* s, struct TreeNode* t){
    if(s==NULL)
    {
        return false;
    }
    if(isSameTree(s,t)==true)
    {
        return true;
    }
    return isSubtree(s->left,t)||isSubtree(s->right,t);
}

