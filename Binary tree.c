#include<stdio.h>
#include<stdlib.h>
typedef int BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType data;
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
}BT;

//先序遍历 
void PrevOrder(BT* root)
{
	if(root==NULL)
	{	
		printf("NULL ");
		return;
	}
	printf("%d ",root->data);
	PrevOrder(root->left);
	PrevOrder(root->right);
 } 
 
//中序遍历
void InOrder(BT* root)
{
	if(root==NULL)
	{
		printf("NULL ");
		return;
	}
	InOrder(root->left);
	printf("%d ",root->data);
	InOrder(root->right);
 } 
 
//后序遍历
void PostOrder(BT* root)
{
	if(root==NULL)
	{	
		printf("NULL ");
		return;
	}
	PostOrder(root->left);
	PostOrder(root->right);
	printf("%d ",root->data);
 }  
 
//遍历方法计算节点数
int size=0;
void TreeSize(BT* root)
{
	if(root==NULL){
		return;
	}
	size++; 
	TreeSize(root->left);
	TreeSize(root->right);
 } 

//分治算法计算节点数 
int TreeSize2(BT* root)
{
	if(root==NULL)
	{
		return 0;
	 } 
	return 1+TreeSize2(root->left)+TreeSize2(root->right);
}

//计算叶子节点数
int BTreeLeafSize(BT* root)
{
	if(root==NULL)
	{
		return 0;
	}
	
	if(root->left==NULL&&root->right==NULL)
	{
		return 1;
	}
	
	return BTreeLeafSize(root->left)+BTreeLeafSize(root->right);
}

//计算第K层有几个节点（root算第一层）
int BTreeKLeveLSize(BT* root,int K) 
{
	if(root==NULL)
	{
		return 0;
	}
	
	if(K==1)
	{
		return 1;
	}
	
	return BTreeKLeveLSize(root->left,K-1)+BTreeKLeveLSize(root->right,K-1);
}

//找到为x的节点
BT* TreeFind(BT* root,int x)
{
	if(root==NULL)
	    return NULL;
	if(root->data==x)
	    return root;
	
	BT* ret=TreeFind(root->left,x);
	if(ret!=NULL)
	{
		return root;
	}
	
	ret=TreeFind(root->right,x);
	if(ret!=NULL)
	{
		return root;
	}
	return NULL;
} 

BT* createBT(int x)
{
	BT* node=(BT*)malloc(sizeof(BT));
	node->data=x;
	node->left=NULL;
	node->right=NULL;
	return node;
}

int main()
 {
 	BT* a=createBT(1);
 	BT* b=createBT(2);
 	BT* c=createBT(3);
 	BT* d=createBT(4);
 	BT* e=createBT(5);
 	a->left=b;
 	a->right=c;
 	b->left=d;
 	b->right=e;
 	PrevOrder(a);
 	printf("\n");
 	InOrder(a);
 	printf("\n");
 	PostOrder(a);
 	printf("\n");
 	TreeSize(a);
 	printf("节点数为%d\n",size);
 	printf("节点数为%d\n",TreeSize2(a));
 	printf("叶子节点数为：%d\n",BTreeLeafSize(a));
 	printf("计算第2层的节点数：%d\n",BTreeKLeveLSize(a,2));
 }
