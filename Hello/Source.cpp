#include <iostream>
#include <string>
#include "Header.h"
#include <iostream>
using namespace std;


class MyString
{


private:
	char* buffer;
public:
	MyString(const char* initString)
	{
		buffer = NULL;
		if (initString != NULL)
		{

			buffer = new char[strlen(initString) + 1];
			strcpy_s(buffer, strlen(initString) + 1, initString);
		}
	}
	~MyString()
	{
		cout << "Invoking destructor. clearing up" << endl;
		delete[] buffer;
	}
	
	int GetLenght()
	{
		return strlen(buffer);
	}

	const char* GetString()
	{
		return buffer;
	}
};

void UseMyString(MyString str)
{
	cout << "String buffer in MyString is " << str.GetLenght();
	cout << "buffer contains: " << str.GetString() << endl;
}
int main()
{
	MyString sayHello("Hello from String Class");
	UseMyString(sayHello);
	
	Pause();
	return 0;
}