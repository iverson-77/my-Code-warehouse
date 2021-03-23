/*��һ�����򣬶����û������һ����������ַ�����
���ݴ��ַ�������һ������������ָ�뷽ʽ�洢���� 
�������µ���������ַ����� ABC##DE#G##F### ���С�#����ʾ���ǿո񣬿ո��ַ����������
������˶������Ժ��ٶԶ������������������������������ */

#include<stdio.h>

typedef struct TreeNode
{
    struct TreeNode* left;
    struct TreeNode* right;
    char val;
}TreeNode;

TreeNode* rebulidtree(char* str,int *pi)
{
    if(str[*pi]=='#')
       {
           return NULL;
       }
    TreeNode* root=(TreeNode*)malloc(sizeof(TreeNode));
    root->val=str[*pi];
    ++*pi;
    root->left=rebulidtree(str,pi);
    ++*pi;
    root->right=rebulidtree(str,pi);
    return root;
}

void InorderTree(TreeNode* root)
{
    if(root==NULL)
        return;
    InorderTree(root->left);
    printf("%c ",root->val);
    InorderTree(root->right);
}

int main()
{
    char str[100];
    scanf("%s",str);
    int i=0;
    TreeNode* tree=rebulidtree(str,&i);
    InorderTree(tree);
    printf("\n");
}
