#include<iostream>
using namespace std;

class test
{
public:
	test()
	{
		cout << "This is test" << endl;
	}

	test(int data)
	{
		m_data = data;
	}
	test(const test &t)
	{
		m_data=t.m_data;
	} 
	int GetData()const
	{
		return m_data;
	}
	~test()
	{

	}
private:
	int m_data;
};

test fun(test t)
{
	int value=t.GetData();
	test tmp(value);
	return tmp;
}
int main()
{
	test t; // 调用无参构造函数
	test t1(100); // 调用带参的构造函数
	fun(t1);
}
