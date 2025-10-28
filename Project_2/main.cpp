#include <iostream>
#include <string>
using namespace std;

class Mypro
{
	friend ostream& operator<<(ostream& cout, Mypro p1);
public:
	Mypro()
	{
		m_num = 0;
	}

	Mypro& operator++()
	{
		m_num++;
		return *this;
	}

	Mypro operator++(int)
	{
		Mypro temp;
		m_num++;
		return temp;
	}

private:
	int m_num;
 };


ostream& operator<<(ostream& cout, Mypro pro)
{
	cout << pro.m_num;
	return cout;
}

void text1()
{
	Mypro p1;

	cout << ++p1 << endl;
}
void text2()
{
	Mypro p2;
	cout << p2++ << endl;
	cout << p2 << endl;
}

int main()
{  
	/*text1();*/

	text2();
}
 