/*ĳ����ĳ�꿪ʼÿ�궼�ٰ�һ������party������ÿ�ζ�Ҫ��Ϩ��������ͬ����������
��������������һ����Ϩ��236������
���ʣ����Ӷ����꿪ʼ������party�ģ�
����д����ʼ������party����������*/

#include<iostream>
using namespace std;

int main()
{
	int sum=0;
	int age=0;
	for(int i=0;i<100;i++)
	{
		for(int j=i;j<100;j++)
		{
			sum+=j;
			if(sum==236)
			{
				cout<<i<<endl;
			}
			if(sum>236)
			{
				break;
			}
		}
		sum=0;
	}
}
