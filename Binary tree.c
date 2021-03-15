#include<stdio.h>
#include<stdlib.h>
typedef int BTDataType;

typedef struct BinaryTreeNode
{
	BTDataType data;
    struct BinaryTreeNode* left;
    struct BinaryTreeNode* right;
}BT;

//������� 
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
 
//�������
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
 
//�������
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
 
//������������ڵ���
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

//�����㷨����ڵ��� 
int TreeSize2(BT* root)
{
	if(root==NULL)
	{
		return 0;
	 } 
	return 1+TreeSize2(root->left)+TreeSize2(root->right);
}

//����Ҷ�ӽڵ���
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

//�����K���м����ڵ㣨root���һ�㣩
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

//�ҵ�Ϊx�Ľڵ�
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
 	printf("�ڵ���Ϊ%d\n",size);
 	printf("�ڵ���Ϊ%d\n",TreeSize2(a));
 	printf("Ҷ�ӽڵ���Ϊ��%d\n",BTreeLeafSize(a));
 	printf("�����2��Ľڵ�����%d\n",BTreeKLeveLSize(a,2));
 }
