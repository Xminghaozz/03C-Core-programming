#include <iostream>
using namespace std;

class Base1
{
public:
	int mA;
	Base1()
	{
		cout << "父类的构造函数调用" << endl;
	}

	~Base1()
	{
		cout << "父类的析构函数调用" << endl;
	}
};

class Son1 :public Base1
{
public:
	int mB;
	Son1()
	{
		cout << "子类的构造函数调用" << endl;
	}

	~Son1()
	{
		cout << "子类的析构函数调用" << endl;
	}
};

void test01()
{
	//继承中的构造顺序为，先构造父类，后构造子类
	//继承中的析构顺序为，先析构子类，后析构父类
	Son1 son1;
}

int main()
{
	test01();
}