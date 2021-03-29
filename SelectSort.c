#include<stdio.h>

void swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

void SelectSort(int* a, int n)
{
	int begin = 0;
	int end = n - 1;
	while (begin<end)
	{
		int mini = begin;
		int maxi = end;
		for (int i = begin; i <= end; i++)
		{
			if (a[i]<a[mini])
			{
				mini = i;
			}
			if (a[i]>a[maxi])
			{
				maxi = i;
			}
		}
		
		swap(&a[begin], &a[mini]);
		if (maxi == begin)
		{
			maxi = mini;
		}
        swap(&a[maxi], &a[end]);
		end--;
		begin++;
	}
}

int main()
{
	int a[12] = { 9, 4, 6, 3, 2, 7, 7, 9, 1, 4, 5, 8 };
	SelectSort(a, 12);
	for (int i = 0; i<12; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
}
