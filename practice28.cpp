/*�� 2019 �ֽ�� 3 ��������ͬ��������֮�ͣ�����Ҫ��ÿ��������������
������ 2 �� 4��һ���ж����ֲ�ͬ�ķֽⷽ����
ע�⽻�� 3 ��������˳����Ϊͬһ�ַ��������� 1000+1001+18 ��
1001+1000+18 ����Ϊͬһ�֡�*/ 
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
