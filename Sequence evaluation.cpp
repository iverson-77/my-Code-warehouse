/*��������1, 1, 1, 3, 5, 9, 17, �����ӵ�4 �ʼ��ÿ���ǰ3 ��ĺ͡�
���20190324 ������4 λ���֡�*/
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
