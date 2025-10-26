#include <iostream>
#include <string>
using namespace std;

class Person
{
public:
	static void func()
	{
		cout << "staic void func静态函数调用" << endl;
	}
};
//void Person::func();

void test1()
{
	Person p;
	p.func();
	
	Person::func();
} 
int main()
{  

	test1();

}
