#include <iostream>
#include <string>
using namespace std;

template<typename T>
void Num(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

void text()
{
	int a = 10;
	int b = 100;

	//第一种形式
	/*Num(a, b);*/
	Num<int>(a, b);


	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

int main()
{
	text();
}