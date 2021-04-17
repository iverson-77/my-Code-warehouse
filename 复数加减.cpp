#include<iostream>
using namespace std;

class Complex
{
	friend Complex operator+(const Complex &c1,const Complex &c2);
	friend Complex operator+(int value,const Complex &c2);
    
    friend ostream& operator<<(ostream &out,const Complex &c);
    friend istream& operator>>(istream &in,Complex &c); 
    
	public:
		Complex(int real=0,int imag=0):m_real(real),m_imag(imag)
		{}
		
		Complex operator+(const Complex &c)
		{
			Complex tmp(m_real+c.m_real,m_imag+c.m_imag);
			return tmp;
		}
		Complex operator+(int value)
		{
			Complex tmp(m_real+value,m_imag+value);
			return tmp;
		}
	
	private:
		int m_real;
		int m_imag;
};

ostream& operator<<(ostream &out,const Complex &c)//有返回值是为了可以连续输出 
{
	out<<"("<<c.m_real<<","<<c.m_imag<<")";
	return out;
}

istream& operator>>(istream &in,Complex &c)
{
	in>>c.m_real>>c.m_imag;
	return in;
}

int main()
{
	Complex c1(1,2);
    Complex c2(2,3);
    Complex c3,c4;
	c3=c1+c2;
	c4=c1+10;

	cout<<c3<<endl;
}
