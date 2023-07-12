#include <iostream>
using namespace std;
//运算符重载：对已有的运算符重新进行定义，赋予其另一种功能，以适应计算不同的数据类型
//加号运算符重载：实现两个自定义数据类型的相加

class Person
{
public:
	int mA;
	int mB;

public:
	//成员函数重载+
	/*Person operator+(Person& p1)
	{
		Person result;
		result.mA = this->mA + p1.mA;
		result.mB = this->mB + p1.mB;
		return result;
	}*/
};

//全局函数重载+
Person operator+(Person& p1, Person& p2)
{
	Person result;
	result.mA = p1.mA + p2.mA;
	result.mB = p1.mB + p2.mB;
	return result;
}

//运算符函数重载的函数重载
Person operator+(Person& p1,int num)
{
	Person result;
	result.mA = p1.mA + num;
	result.mB = p1.mB + num;
	return result;
}


void test01()
{
	Person p1;
	p1.mA = 10;
	p1.mB = 20;

	Person p2;
	p2.mA = 5;
	p2.mB = 5;

	//成员函数重载本质调用
	//Person p3 = p1.operator+(p2);
	//Person p3 = p1 + p2;//可以简化成这种形式

	//全局函数重载本质调用
	//Person p3 = operator(p1, p2);
	//Person p3 = p1 + p2;//可以简化成这种形式

	//运算符重载的函数重载
	Person p3 = p1 + 1;
	cout << "p3的值" << p3.mA << endl;
	cout << "p3的值" << p3.mB << endl;

}

int main()
{
	test01();
}