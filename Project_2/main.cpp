#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Person
{
public:

    char m_name[64];
    int m_age;
};

void text1()
{
    ifstream ifs;
    ifs.open("main.txt", ios::in | ios::binary);
    if (!ifs.is_open())
    {
        cout << "无法打开文件......" << endl;

        return;
    }
    Person p;

    ifs.read((char*)&p, sizeof(p));

    cout << "姓名 ：" << p.m_name << "年龄 ：" << p.m_age << endl;

    ifs.close();

}

 int main()
{  
    text1();
}