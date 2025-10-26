#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	static int m_a;
};

int Person::m_a = 100;

void test01()
{
	Person p;
	cout << p.m_a << endl;
	Person p1;
	p.m_a = 200;
	cout << p.m_a << endl;
}
void text2()
{

	/*Person p;
	cout << p.m_a<<endl;*/
	cout << Person::m_a << endl;
}

int main()
{  

	/*test01();*/
	text2();

}
