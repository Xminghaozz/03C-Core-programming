#include <iostream>
using namespace std;

class Base1
{
public:
	int mA;
protected:
	int mB;
private:
	int mC;
};

class Son1 :public Base1
{
public:
	int mD;
};

//利用开发人员命令提示工具查看对象模型
//跳转盘符 D: 跳转文件路径 cd D:\VSworkspace\03C++核心编程
//查看命令 cl/d1 reportSingleClassLayout类名 文件名
void test01()
{
	//在父类中所有非静态成员属性都会被子类继承
	//父类中的私有成员属性被编译器隐藏，因此访问不到，但是确实被继承下去 
	cout << "size of Son1=" << sizeof(Son1) << endl;//16
}

int main()
{
	test01();
}