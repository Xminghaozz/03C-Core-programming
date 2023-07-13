#include <iostream>
using namespace std;

//总结:同名静态成员处理方式和非静态处理方式一样，只不过有两种访问的方式(通过对象和类名)。
class Base1
{
public:
	static int mA;

	static void func()
	{
		cout << "Base1-func()静态函数调用" << endl;
	}
	static void func(int a)
	{
		cout << "父类同名重载静态成员函数调用" << endl;
	}
};

int Base1::mA = 100;

class Son :public Base1
{
public:

	static void func()
	{
		cout << "子类同名静态成员函数调用" << endl;
	}
	static int mA;
};
int Son::mA = 200;

//同名静态成员属性处理方式
void test01()
{
	Son son1;
	cout << "通过对象访问" << endl;
	son1.func();
	//如果子类中出现和父类同名的静态成员函数
	//子类的同名成员会隐藏掉父类中所有同名静态成员函数
	//如果想要访问到父类中被隐藏的同名静态成员函数，需要加作用域
	son1.Base1::func();
	son1.Base1::func(10);

	//通过类名作用域访问
	cout << "通过类名访问" << endl;
	Son::func();
	Son::Base1::func();

	//如果要通过子类对象访问到父类中的同名静态成员，需要加作用域。
	cout << son1.mA << endl;
	cout << Son::mA << endl;
	cout << son1.Base1::mA << endl;
	cout << Son::Base1::mA << endl;


}

int main()
{
	test01();
}