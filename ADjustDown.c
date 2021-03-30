#include<stdio.h>

void ADjustDown(int* a,int n,int root)
{
	int parent=root;
	int child=parent*2+1;
	while(child<n)
	{
		//child指向孩子中小的那一个 
	    if(child+1<n&&a[child]>a[child+1])
	{
		child++;
	}
	    if(a[child]<a[parent])
	{
		int tmp;
		tmp=a[child];
		a[child]=a[parent];
		a[parent]=tmp;
		
		parent=child;
		child=child*2+1;
	}
	else
	{
		break;
	}
	}
	
}

int main()
{
	int a[]={12,43,56,23,67,23,87,55,84,25,64};
	int n=sizeof(a)/sizeof(int);
	for(int i=(n-1-1)/2;i>=0;i--)
	{
		ADjustDown(a,n,i);
	}
	for(int k=0;k<=n-1;k++)
	{
		printf("%d",a[k]);
	}
}
