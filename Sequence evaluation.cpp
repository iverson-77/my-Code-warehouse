/*给定数列1, 1, 1, 3, 5, 9, 17, …，从第4 项开始，每项都是前3 项的和。
求第20190324 项的最后4 位数字。*/
#include<iostream>
using namespace std;

int main()
{
	long long a=1,b=1,c=1;
    long long num=4;
	while(num<=20190324)
	{
		int tmp=(a+b+c)%10000;
		a=b;
		b=c;
		c=tmp;
		num++;
	}
	cout<<c<<endl;
}
