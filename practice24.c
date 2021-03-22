/*���������ǿն����� s �� t������?s ���Ƿ������ t ������ͬ�ṹ�ͽڵ�ֵ��������
s ��һ���������� s ��һ���ڵ������ڵ���������s Ҳ���Կ����������һ��������*/

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

