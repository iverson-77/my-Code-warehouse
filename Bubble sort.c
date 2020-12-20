#include<stdio.h>
int main()
{
	int a[8] = { 3, 2, 6, 4, 1, 8, 5, 7 };
	for (int i = 0; i <8; i++){
		for (int j = 1; j < 8; j++){

			if (a[j - 1]>a[j]){
				int k = a[j];
				a[j] = a[j - 1];
				a[j - 1] = k;
			}

		}
	}
	for (int m = 0; m < 8; m++){
		printf("%d\n", a[m]);
	}
	return 0;
}