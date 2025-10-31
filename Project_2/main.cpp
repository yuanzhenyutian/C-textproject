#include <iostream>
#include <string>
using namespace std;
//多态案例2 制作饮品

class Cpu                                 //CPU
{
public:
	virtual void Calculate() = 0;   
};
class  VideoCard                         //显卡
{
public:
	virtual void Display() =  0;
};
class Memory                            //内存
{
public:
	virtual void Storage() = 0;
};

//组装电脑  提供接口 工作方式
class Computer
{
public:
	Computer(Cpu *cp,VideoCard *vcard,Memory *mem)  //组装电脑
	{
		m_cp = cp;
		m_vcard = vcard;
		m_mem = mem;
	}

	void dowork()  //工作函数
	{
		m_cp->Calculate();
		m_vcard->Display();
		m_mem->Storage();
	} 
	//提供析构函数  释放三个电脑零件的堆区内存
	~Computer()
	{
		//释放组件
		if (m_cp != nullptr)
		{
			delete m_cp;
			m_cp = nullptr;
		}
		if (m_vcard != nullptr)
		{
			delete m_vcard;
			m_vcard = nullptr;
		}
		if (m_mem != nullptr)
		{
			delete m_mem;
			m_mem = nullptr;
		}
	}
	
private:
	Cpu* m_cp;
	VideoCard *m_vcard;
	Memory* m_mem;
};


//提供零件厂商
class InterCpu: public Cpu
{
public:
	void Calculate()
	{
		cout << "Inter厂商提供的CPU在计算" << endl;
	}
};
class InterVideoCard :public VideoCard
{
public:
	void Display()
	{
		cout << "Inter厂商提供的display在显示" << endl;
	}
};
class InterMemory :public Memory
{
public:
	void Storage() 
	{
		cout << "Inter厂商提供的storage在存储" << endl;
	}
};


//lenovo 厂商
class LenovoCpu :public Cpu
{
public:
	virtual	void Calculate()
	{
		cout << "Lenovo厂商提供的CPU在计算" << endl;
	}
};
class LenovoVideoCard :public VideoCard
{
public:
	virtual void Display()
	{
		cout << "Lenovo厂商提供的display在显示" << endl;
	}
};
class LenovoMemory :public Memory
{
public:
	virtual void Storage()
	{
		cout << "Lenovo厂商提供的storage在存储" << endl;
	}
};
//测试组装电脑
void test01()
{
	//第一台电脑
	cout << "第一台电脑在正常的工作........\n" << endl;
	Cpu* intercpu = new InterCpu;
	VideoCard* interVideoCard = new InterVideoCard;
	Memory* memory = new InterMemory;

	//创建第一台电脑  耦合设计......
    Computer* computer1 = new Computer(intercpu, interVideoCard, memory);
	//开始工作

	computer1->dowork();
    delete computer1;
	cout << "--------------------------------\n" << endl;
	//第二台电脑的组装
	cout << "第二台电脑在正常的工作........、\n" << endl;
	Computer* computer2 =new Computer(new LenovoCpu, new LenovoVideoCard,new LenovoMemory  );
	//开始工作

	computer2->dowork();
	delete computer2; 

	cout << "第三台电脑在正常的工作........、\n" << endl;
	Computer* computer3 = new Computer(new LenovoCpu, new InterVideoCard, new LenovoMemory);
	//开始工作

	computer3->dowork();
	delete computer3;

} 

 
int main()
{  
	test01(); 
	system("pause");
}