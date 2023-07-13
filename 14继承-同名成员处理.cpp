#include <iostream>
using namespace std;

class Base1
{
public:
	int mA;
	Base1()
	{
		mA = 100;
	}
	void func()
	{
		cout << "Base1-func()调用" << endl;
	}
	void func(int a)
	{
		cout << "父类同名重载成员函数调用" << endl;
	}
};

class Son :public Base1
{
public:
	Son()
	{
		mA = 200;
	}
	void func()
	{
		cout << "子类同名成员函数调用" << endl;
	}
	int mA;
};

//同名成员属性处理方式
void test01()
{
	Son son1;
	son1.func();
	//如果子类中出现和父类同名的成员函数
	//子类的同名成员会隐藏掉父类中所有同名成员函数
	//如果想要访问到父类中被隐藏的同名成员函数，需要加作用域
	son1.Base1::func();
	son1.Base1::func(10);

	//如果要通过子类对象访问到父类中的同名成员，需要加作用域。
	cout << son1.mA << endl;
	cout << son1.Base1::mA << endl;

}

int main()
{
	test01();
}