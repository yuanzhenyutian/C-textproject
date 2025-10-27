#include <iostream>
#include <string>
using namespace std;

//加号运算符重载

class Person
{
public:
	int m_a;
	int m_b;
//Person operator+ (Person &p)    //1成员函数重载
//{
//	Person temp;
//	temp.m_a = m_a + p.m_a;
//	temp.m_b = m_a + p.m_a;
//	return(temp);
//}

};

Person operator+(Person& p1, Person& p2)
{
	Person temp;
	temp.m_a = p1.m_a + p2.m_a;
	temp.m_b = p2.m_b + p2.m_b;
	return temp;
}

void test01()
{
	Person p1;
	p1.m_a = 10;
	p1.m_b = 10;
	Person p2;
	p2.m_a = 10;
	p2.m_b = 10;

	Person p3 = p1 + p2;
	cout << "p3.ma=" << p3.m_a << endl;
	cout << "p3.mb=" << p3.m_b << endl;

}


//2全局函数重载

int main()
{  
	test01();
	
}
 