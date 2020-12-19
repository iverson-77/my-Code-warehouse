#include<stdio.h>

void init(int a[],int length)
{
	for (int i = 0; i <= length; i++){
		a[i] = 0;
	}
}
void print(int a[], int length)
{
	for (int i = 0; i <= length; i++){
		printf("%d", a[i]);
	}
}
void reverse(int a[], int length)
{
	int left = 0;
	int right = length;
	while (left < right){
		int temp = a[left];
		a[left] = a[right];
		a[right] = temp;
		left++;
		right--;
	}
}
int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7 };
	int length = sizeof(a) / 4 - 1;
	reverse(a, length);
	for (int i = 0; i <= length; i++){
		printf("%d", a[i]);
	}
	return 0;
}