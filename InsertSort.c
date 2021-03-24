#include<stdio.h>

void InsertSort(int* a,int n)
{
	for(int i=0;i<n-1;i++)
	{
		int end=i;
		int tmp=a[end+1];
		while(end>=0)
		{
			if(tmp<a[end])
			{
				a[end+1]=a[end];
				end--; 
			}
			else
			{
				break;
			}
		}
		a[end+1]=tmp;
	}
}

int main()
{
	int a[6]={2,4,1,6,3,7};
	InsertSort(a,6);
	for(int i=0;i<6;i++)
	{
		printf("%d ",a[i]); 
	}
	printf("\n");
}
