#include<iostream>
using namespace std;

class Int
{
	public:
		Int(int i=0):m_i(i)
		{}
		
		Int operator+(const Int &i)//i���ô��ݣ��൱��b�ı��������ٿ��ٿռ� 
		{
			Int tmp=m_i+i.m_i;
			return tmp;
		} 
		/*�������÷�������Ϊ������tmp����������ʱ�ռ䣬�������أ��ռ�ᱻ�ͷš�
		��ζ�����õ���һ���ͷ��˵Ķ��� */
	Int& operator+=(const Int &i)//�������÷���Ҳ���ԣ���Ҫ����һ�ο������캯�� 
	{
		this->m_i+=i.m_i;
		return *this;
	}
	bool operator==(const Int &i)
	{
		return m_i==i.m_i;
	}
	bool operator!=(const Int &i)
	{
		return !(*this==i);
	}
    private:
    	int m_i;
};

int main()
{
	Int a=1;
	Int b=2;
	Int ret=a+b;
}
