#include <iostream>
using namespace std;

//C++编译器至少给一个类添加4个函数(前三个之前已经讲过了)
//默认构造函数(无参，函数体为空)
//默认析构函数(无参，函数体为空)
//默认拷贝构造函数，对属性进行值拷贝
//赋值运算符operator = ，对属性进行值拷贝
//如果类中有属性指向堆区，做赋值操作时也会出现深浅拷贝问题。会出现堆区内存重复释放的问题

class Person
{
public:
	Person(int age)
	{
		mAge = new int(age);
	}
	int* mAge;

	~Person()
	{
		if (mAge != NULL)
		{
			delete mAge;
			mAge = NULL;
		}
	}

	Person & operator=(Person& p)
	{
		//编译器默认提供浅拷贝，我们要实现深拷贝，来避免堆区内存出现悬挂指针
		//mAge = p.mAge;
		//应该先判断是否有属性在堆区，如果有先释放干净，然后再深拷贝

		if (mAge != NULL)
		{
			delete mAge;
			mAge = NULL;
		}
		mAge = new int(*p.mAge);//深拷贝
		return *this;//返回对象自身可以实现连等操作

	}
};

void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(25);
	p1 = p2 = p3;
	cout << "p1的年龄为" << *p1.mAge << endl;
	cout << "p2的年龄为" << *p2.mAge << endl;
	cout << "p3的年龄为" << *p3.mAge << endl;

}


int main()
{
	test01();
}