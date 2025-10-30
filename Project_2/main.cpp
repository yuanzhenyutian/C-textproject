#include <iostream>
#include <string>
using namespace std;
//多态案例2 制作饮品

class Drink
{
public:
	virtual void Boil() = 0; //煮水
	virtual void Brew() = 0;//冲泡 
	virtual void PourInCup() = 0;//倒入杯中
	virtual void PutSomething() = 0; //加入辅料

	void MakeDringk()
	{
		Boil();
		Brew();
		PourInCup();
		PutSomething();
		
	}
	
};

class Coff :public Drink  //咖啡
{
public:

	virtual void Boil()
	{
		cout << "1--煮水，做好准备" << endl;
	}
	virtual void Brew() 
	{
		cout << "2--冲泡咖啡" << endl;
	}
	virtual void PourInCup()
	{
		cout << "3--倒入杯中" << endl;
	}
	virtual void PutSomething() 
	{
		cout << "4--加入糖和牛奶" << endl;
	}
	
};
class Tea :public Drink
{
public:
	virtual void Boil()
	{
		cout << "1--煮水，做好准备" << endl;
	}
	virtual void Brew()
	{
		cout << "2--冲泡茶叶" << endl;
	}
	virtual void PourInCup()
	{
		cout << "3--倒入杯中" << endl;
	}
	virtual void PutSomething()
	{
		/*cout << "4--加入柠檬" << endl;*/
	}
};
void dowork(Drink* drink)
{

	drink->MakeDringk();
	delete drink;
}
void test01()
{
	//制作咖啡
	dowork(new Coff);

	cout << "-----***-----***-----***-----" << endl;
	
	dowork(new Tea);

} 

int main()
{  

	test01();
	system("pause");
}
 