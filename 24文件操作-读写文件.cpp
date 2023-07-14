#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//文件操作
//程序运行时，产生的数据都属于临时数据，程序一旦运行结束就会被释放。
// 
//通过文件可以将数据持久化。
//C++中对文件进行操作需要包含头文件< Fstream>
//
//文件类型分为两种:
//文本文件 - 文件以文本的ASCII码形式存储在计算机中
//二进制文件 - 文件以文本的二进制形式存储在计算机中，用户一般不能直接读懂他们
//操作文件的三大类
//
//ofstream : 写操作
//ifstream：读操作
//fstream : 读写操作

//文本文件
//写文件
//包含头文件——#include< fstream>


void test01()
{
	//创建流对象——ofstream ofs;
	ofstream ofs;
	//打开文件——ofs.open(“文件路径”, 打开方式)
	ofs.open("test.txt", ios::out);
	//写数据——ofs << “写入的数据”;
	ofs << "公司：江苏蓝航仿真科技" << endl;
	ofs << "工作地：江苏扬州" << endl;
	//关闭流——ofs.close();
	ofs.close();

	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "文件打开失败" << endl;
		return;
	}
	/*char buf[1024] = { 0 };
	while (ifs>>buf)
	{
		cout << buf << endl;
	}第一种读取方式*/

	/*char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}第二种方式*/

	string buf;
	while (getline(ifs,buf))
	{
		cout << buf << endl;
	}//第三种方式

	//char c;
	//while ((c = ifs.get()) != EOF)//EOF——end of file
	//{
	//	cout << c;
	//}第四种方式，不推荐
	ifs.close();
}

int main()
{
	test01();
}