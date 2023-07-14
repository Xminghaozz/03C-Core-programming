#include <iostream>
using namespace std;
//纯虚函数和抽象类
class Base1
{
public:
	//只要有一个纯虚函数，这个类就成为抽象类
	//特点：无法实例化对象
	virtual void func() = 0;//关键字 virtual
	//抽象类的子类必须重写父类的纯虚函数，否则也属于抽象类，也无法实例化对象
};

class Son1 :public Base1
{
public:

	int mA;

	void func()
	{
		cout << "Son1的func()函数调用" << endl;
	}
};

void test01()
{
	//Base1 base1;无法实例化对象
	Son1 son2;
	son2.func();
	son2.mA = 100;
	cout << son2.mA << endl;

	Base1* son1 = new Son1;
	son1->func();
}

int main()
{
	test01();
}