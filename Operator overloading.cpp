#include<iostream>
using namespace std;

class Int
{
	public:
		Int(int i=0):m_i(i)
		{}
		
		Int operator+(const Int &i)//i引用传递，相当于b的别名，不再开辟空间 
		{
			Int tmp=m_i+i.m_i;
			return tmp;
		} 
		/*不用引用返回是因为定义了tmp，开辟了临时空间，函数返回，空间会被释放。
		意味着引用的是一个释放了的对象 */
	Int& operator+=(const Int &i)//不用引用返回也可以，但要调用一次拷贝构造函数 
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
