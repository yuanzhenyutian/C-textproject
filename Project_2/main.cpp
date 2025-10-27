#include <iostream>
#include <string>
using namespace std;

//加号运算符重载

class Person
{
friend	ostream& operator<<(ostream& cout, Person& p);
friend void test1();
private:
	int m_a;
	int m_b;
};

ostream &operator<<(ostream &cout,Person &p)
{
	cout << "m_a:" << p.m_a << "\nm_b:" << p.m_b ;

	return cout;
}

void test1()
{
	Person p1;
	p1.m_a = 10;
	p1.m_b = 20; 
	cout << p1<<endl;
	cout << "....m_a....:" << p1.m_a << "\n....m_b....:" << p1.m_b << endl;
}


//2全局函数重载

int main()
{  
	test1();
}
 