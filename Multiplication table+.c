#include<stdio.h>
int main()
{
	int x;
	printf("������Ҫ��ӡ�ĳ˷��ھ�������У�");
	scanf("%d", &x);
	int m;
	for (int i = 1; i <= x; i++){
		for (int j = i; j <= x; j++){
			m = i*j;
			printf("%d*%d=%d ",i,j, m);
		}
		printf("\n");
	}
}