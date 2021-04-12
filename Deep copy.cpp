#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class String
{
public:
	String(const char *str = "")
	{
		m_data = (char*)malloc(strlen(str) + 1);
		strcpy(m_data, str);
	}
	String(const String &s)
	{
		m_data = (char*)malloc(strlen(s.m_data) + 1);
		strcpy(m_data, s.m_data);
	}
	String& operator=(const String &s)
	{
		if (this != &s)
		{
			free(m_data);
			m_data = (char*)malloc(strlen(s.m_data) + 1);
			strcpy(m_data, s.m_data);
		}
		return *this;
	}
	char* GetString()const
	{
		return m_data;
	}
	~String()
	{
		free(m_data);
		m_data = NULL;
	}
private:
	char* m_data;
};

int main()
{
	String s1("abc");
	cout << s1.GetString() << endl;

	String s2 = s1;

	String s3 = ("xyz");
	s3 = s1;
}
