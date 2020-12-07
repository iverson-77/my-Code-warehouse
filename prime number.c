#include<stdio.h>
int main()
{
	for (int i = 101; i <= 200; i++){
		int j = 0;
		for (j = 2; j < i; j++){
			if (i%j == 0){
				break;
			}
		}
		if (j == i){
			printf("%d\n", i);
		}

	}
	getchar();
}