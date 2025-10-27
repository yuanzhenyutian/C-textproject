#include <iostream>
#include <string>
using namespace std;

//全局函数友元
class Building
{
	friend void goodgay(Building* buiding);
public:
	Building()
	{
		m_sittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

	string m_sittingRoom;

private:

	string m_BedRoom;

};
//全局函数
void goodgay(Building* buiding)
{
	cout << "可以访问: " << buiding->m_sittingRoom << endl;
	cout << "可以访问: " << buiding->m_BedRoom << endl;
}
void test01()
{
	Building build;
	goodgay(&build);
}
int main()
{  
	test01();
	
}
