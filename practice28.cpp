/*把 2019 分解成 3 个各不相同的正整数之和，并且要求每个正整数都不包
含数字 2 和 4，一共有多少种不同的分解方法？
注意交换 3 个整数的顺序被视为同一种方法，例如 1000+1001+18 和
1001+1000+18 被视为同一种。*/ 
#include<stdio.h>

int check(int x)
{
	while(x)
	{
		if((x%10==2)||(x%10==4))
		{
			return 1;
		}
		x/=10;
	}
	return 0;
} 

int main()
{
	int num=0;
	for(int i=1;i<2019;i++)
	{
		if(check(i))
		{
			continue;
		}
		for(int j=1;j+i<2019;j++)
		{
			if(check(j))
			{
				continue;
			}
			for(int k=1;j+i+k<=2019;k++)
			{
				if(check(k))
				{
					continue;
				}
				if(i+j+k==2019&&(i!=j)&&(i!=k)&&(j!=k))
				{
					num++;
				}
			}
		}
	}
	num=num/6;
	printf("%d\n",num);
}
