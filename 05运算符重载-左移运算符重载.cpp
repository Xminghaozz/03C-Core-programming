#include <iostream>
using namespace std;

//左移运算符：可以输出自定义数据类型
class Person
{
	//如果成员变量为私有，那么可以将全局运算符重载函数设为类的友元函数
	friend ostream& operator<<(ostream& cout, Person& p1);
	friend void test01();
//public:
//	int mA;
//	int mB;

	//利用成员函数重载左移运算符p.operator<<(cout)简化版本p<<cout
	//一般我们不会利用成员函数来重载<<运算符，以为无法实现cout在左边
private:
	int mA;
	int mB;

};

//只能利用全局函数重载左移运算符
ostream &operator<<(ostream& cout, Person& p1) //这样写的本质就是operator << (cout, p)简化版本就是cout << p;
{
	cout << "mA=" << p1.mA << " mB=" << p1.mB;
	return cout;
}


void test01()
{
	Person p1;
	p1.mA = 10;
	p1.mB = 5;

	cout << p1 << endl;
}

int main()
{
	test01();
}