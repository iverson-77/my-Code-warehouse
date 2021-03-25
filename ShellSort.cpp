#include<stdio.h>

void ShellSort(int* a,int n)
{
	int gap=n;
	while(gap>1)
	{
		gap=gap/3+1;
		for(int i=0;i<n-gap;i++)
	{
		int end=i;
		int tmp=a[end+gap];
		while(end>=0)
		{
			if(tmp<a[end])
			{
				a[end+gap]=a[end];
				end-=gap;
			}
			else
			{
				break;
			}
		}
		a[end+gap]=tmp;
	}
	}
}

int main()
{
	int a[12]={9,4,6,3,2,7,7,9,1,4,5,8};
	ShellSort(a,12);
	for(int i=0;i<12;i++)
	{
		printf("%d ",a[i]); 
	}
	printf("\n");
}
