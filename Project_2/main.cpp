#include <iostream>
#include <string>
using namespace std;

//分别使用普通和多态的写法  写计算器
class calculator
{
public:
	int getResult(string oper)
	{
		if(oper=="+")
		{
			return m_num1 + m_num2;
		}
		else if (oper == "-")
		{
			return m_num1 - m_num2;
		}
		else if (oper == "*")
		{
			return m_num1 * m_num2;
		}
	}
	int m_num1;
	int m_num2;
};

void text1()
{
	calculator cal;  //创建计算器对象
	cal.m_num1 = 20;
	cal.m_num2 = 10;

	cout << cal.m_num1 << " + " << cal.m_num2 << " = " << cal.getResult("+") << endl;
	cout << cal.m_num1 << " - " << cal.m_num2 << " = " << cal.getResult("-") << endl;
	cout << cal.m_num1 << " * " << cal.m_num2 << " = " << cal.getResult("*") << endl;
}
//利用多态实现计算器

//实现计算器抽象类

class Abstractcalculator   
{
public:
	virtual int getResult()
	{
		return 0 ;
	}
	int m_Num1=20;
	int m_Num2=15;
};

class addcalculator :public Abstractcalculator  //加法计算
{
public:
	int getResult()
	{
		return m_Num1 + m_Num2;
	}
};
class subcalculator :public Abstractcalculator  //减法计算
{
public:
	int getResult()
	{
		return m_Num1 - m_Num2;
	}
};

class mulcalculator :public Abstractcalculator  //乘法计算
{
public:
	int getResult()
	{
		return m_Num1 * m_Num2;
	}
};

void text2()
{
	Abstractcalculator* abc = new addcalculator;  //加法
	abc->m_Num1 ;
	abc->m_Num2 ;
	cout << abc->m_Num1 << "+" << abc->m_Num2 <<" = " << abc->getResult()<<endl;
	delete abc;
	//减法
	abc = new subcalculator;
	cout << abc->m_Num1 << "-" << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
	//乘法
	abc = new mulcalculator;
	cout << abc->m_Num1 << "*" << abc->m_Num2 << " = " << abc->getResult() << endl;
	delete abc;
}
int main()
{  
	/*text1();*/
	text2();
	
	system("pause");
}
 