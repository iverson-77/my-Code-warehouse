#include<stdio.h>

void swap(int* a,int* b)
{
	int tmp=*a;
	*a=*b;
	*b=tmp;
}
void BubbleSort(int* a,int n)
{
	int end=n;
	int exchange=0;
	while(end>0)
	{
		for(int i=1;i<end;i++)
		{
			if(a[i-1]>a[i])
			{
				swap(&a[i-1],&a[i]);
				exchange=1;
			}
		}
		end--;
		if(exchange==0)
		break;
	}
} 

int main()
{
	int a[7]={2,4,1,7,3,6,2};
	BubbleSort(a,7);
	for(int i=0;i<7;i++)
	{
		printf("%d ",a[i]);
	}
}
