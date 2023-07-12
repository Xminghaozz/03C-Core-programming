#include <iostream>
using namespace std;

//继承的好处：减少重复代码
//语法：class 子类 : 继承方式 父类
//子类也称派生类
//父类也称基类

//派生类中的成员
//一部分是从基类继承过来的，另一部分是自己增加的成员。
//从基类继承过来的表现其共性，而新增加的成员体现其个性。


class Base1
{
public:
	int mA;
protected:
	int mB;
private:
	int mC;
};

class Son1 :public Base1//公共继承
{
	void func()
	{
		mA = 1;//父类中的公共权限成员 到子类中依然是公共权限
		mB = 2;//父类中的保护权限成员 到子类中依然是保护权限
		//mC = 3;不可访问父类私有权限的成员
	}
};

class Son2 :protected Base1//保护继承
{
	void func2()
	{
		mA = 3;//父类中的公共权限成员 到子类中变成保护权限
		mB = 4;//父类中的保护权限成员 到子类中变成保护权限
		//mC = 5;不可访问父类私有权限的成员
	}
};

class Son3 :private Base1//私有继承
{
	void func3()
	{
		mA = 6;//父类中的公共权限成员 到子类中变成私有权限
		mB = 7;//父类中的保护权限成员 到子类中变成私有权限
		//mC = 8;不可访问父类私有权限的成员
	}
};

void test01() 
{
	Son1 s1;
	s1.mA = 100;
	//s1.mB = 100;mB是保护权限，类外不可以访问

	Son2 s2;
	//s2.mA = 200;mA经过保护继承，权限已经变为保护权限，因此类外无法访问

	Son3 s3;
	//s3.mA = 200;mA经过私有继承，权限已经变为私有权限，因此类外无法访问
}
int main()
{
	test01();
}