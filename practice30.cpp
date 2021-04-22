/*某君从某年开始每年都举办一次生日party，并且每次都要吹熄与年龄相同根数的蜡烛。
现在算起来，他一共吹熄了236根蜡烛。
请问，他从多少岁开始过生日party的？
请填写他开始过生日party的年龄数。*/

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
