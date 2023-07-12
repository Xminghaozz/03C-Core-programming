#include <iostream>
using namespace std;
//总结:前置递增返回引用，后置递增返回值。
class MyInteger
{
	friend ostream& operator<<(ostream &cout, MyInteger myInt);
public:
	MyInteger()
	{
		mNum = 10;
	}

	//重载前置++运算符，返回引用是为了一直对一个数据进行递增操作
	MyInteger & operator++()
	{
		//先进行++运算
		mNum++;
		//再将自身返回
		return *this;
	}
	//重载后置++运算符 
	MyInteger operator++(int) //int代表占位参数，他可以用于区分前置和后置递增
	{
		//先记录当时的结果
		MyInteger temp = *this;
		//后 递增
		mNum++;
		//最后将记录结果返回
		return temp;
	}

private:
	int mNum;
};

//重载左移运算符
ostream& operator<<(ostream &cout, MyInteger myInt)
{
	cout << myInt.mNum << endl;
	return cout;
}

void test01()
{
	MyInteger myInt;
	cout << ++(++myInt) << endl;
}

void test02()
{
	MyInteger myInt2;
	cout << myInt2++ << endl;
	cout << myInt2 << endl;
}

int main()
{
	//test01();
	test02();
}