/*���һ�������ķ��Ӻͷ�ĸ�����Լ����1�����������Ϊ��Լ������
���磬3/4,5/2,1/8,7/1���Ǽ�Լ���������ʣ��ж��ٸ���Լ������
���Ӻͷ�ĸ����1��2020֮�������������1��2020��*/

include<iostream>
using namespace std;

int divisor(int a, int b)
{
	int c;
	while (1)
	{
		c = a%b;
		if (c == 0)
		{
			break;
		}
		a = b;
		b = c;
	}
	return b;
}

int main()
{
	int x = 0;
	for (int i = 1; i <= 2020; i++)
	{
		for (int j = 1; j <= 2020; j++)
		{
			if (divisor(i, j) == 1)
			{
				x++;
			}
		}
	}
	cout << x << endl;
}
