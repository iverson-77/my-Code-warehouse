/*编一个程序，读入用户输入的一串先序遍历字符串，
根据此字符串建立一个二叉树（以指针方式存储）。 
例如如下的先序遍历字符串： ABC##DE#G##F### 其中“#”表示的是空格，空格字符代表空树。
建立起此二叉树以后，再对二叉树进行中序遍历，输出遍历结果。 */

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
