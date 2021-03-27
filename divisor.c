/*如果一个分数的分子和分母的最大公约数是1，这个分数称为既约分数。
例如，3/4,5/2,1/8,7/1都是既约分数。请问，有多少个既约分数，
分子和分母都是1到2020之间的整数（包括1和2020）*/

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
