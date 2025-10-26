#include <iostream>
#include <string>
using namespace std;

class Phone
{
public:
	string m_pname;
	Phone(string pname)
	{
		m_pname = pname;
	}
};

class Person
{
public:
	Person(string name, string pname) 
		:m_name(name),m_phone(pname)
	{
    }
	
	string m_name;
	Phone m_phone;
};
void test01()
{
	Person p("冬冬", "华为MATE");
}

int main()
{

	test01();
}