#include <iostream>
using namespace std;

//函数调用运算符()也可以重载


class MyPrintf
{
public:
	//重载函数调用运算符()
	void operator()(string text)
	{
		cout << text << endl;
	}
};


//仿函数没有固定写法，非常灵活
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void test01()
{
	MyPrintf myPrint;
	myPrint("hello world");//由于重载后使用的方式非常像函数的调用，因此称为仿函数

	MyAdd myAdd;
	int a = myAdd(1, 2);
	cout << a << endl;
	//匿名函数对象，匿名函数对象——特点:当前行被执行完立即释放
	cout << MyAdd()(10, 5) << endl;
}

int main()
{
	test01();
}
