#include<stdio.h>
int main()
{
	int x, y;
	scanf("%d %d", &x, &y);
	int count = 0;
	int tmp = x^y;
	for (int i = 0; i < 32; i++){
		if (((tmp>>i) & 1) == 1){
			count++;
		}
	}
	printf("%d", count);
	return 0;
}