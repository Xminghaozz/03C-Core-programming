#include <iostream>
using namespace std;

//多继承，C++中实际开发中不建议使用多继承，语法上支持一个类继承多个父类
//语法:class 子类 :继承方式 父类1，继承方式 父类2
class Base1
{
public:
	int mA;
	Base1()
	{
		mA = 100;
	}
};

class Base2
{
public:
	int mA;
	Base2()
	{
		mA = 200;
	}
};

class Son:public Base1,public Base2
{
public:
	int mB;
	int mC;
	Son()
	{
		mB = 300;
		mC = 400;
	}
};

void test01()
{
	Son son1;
	cout <<"sizeof(son)="<<sizeof(son1) << endl;//16 包含自身的两个成员变量，父类1的mA成员和父类2的mA成员
	cout << "父类Base1的mA=" << son1.Base1::mA << endl;
	cout << "父类Base2的mA=" << son1.Base2::mA << endl;
}
int main()
{
	test01();
	return 0;
}