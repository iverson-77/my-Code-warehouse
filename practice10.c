#include<stdio.h>
int main()
{
	int x;
	scanf("%d", &x);
	int count = 0;
	for (int i = 0; i < 32;i++){
		if (((x >> i) & 1) == 1)
			count++;
      
	}
	printf("%d", count);
	return 0;
}