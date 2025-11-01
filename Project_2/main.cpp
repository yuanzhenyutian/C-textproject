#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//文件操作

void text01()
{
	ofstream ofs;   //创建输出对象

	ofs.open("message.txt", ios::binary);   //打开文件  指定文件  打开方式

	ofs << "姓名：   张三" << endl;
	ofs << "性别：   男" << endl;
	ofs << "年龄：   35" << endl;

	ofs.close();

}
 
int main()
{  
	text01();
}