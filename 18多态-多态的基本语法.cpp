#include <iostream>
using namespace std;

//多态是C++面向对象三大特性之一
//多态分为两类：
//1、静态多态：函数重载和运算符重载属于静态多态，复用函数名
//2、动态多态：派生类和虚函数实现运行时多态
//区别：静态多态的函数地址早绑定-编译阶段确定函数地址
//		动态多态的函数地址晚绑定-运行阶段确定函数地址

class Animal
{
public:
	virtual void speak()//虚函数，加关键字virtual实现地址晚绑定
	//动态多态满足条件
	//1、有继承关系
	//2、子类要重写父类的虚函数 重写要求：函数返回值类型，参数列表，参数名完全相同
	

	{
		cout << "动物在说话" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "小猫在喵喵叫" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "小狗在汪汪叫" << endl;
	}
};

//地址先绑定，在编译阶段就已经确定函数地址
//如果想要让猫说话，那么函数地址就不能提前绑定，需要在运行阶段绑定-地址晚绑定：在基类方法前加关键字virtual
void doSpeak(Animal& animal)//动态多态的使用：父类的指针或引用 指向子类传入的对象
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}


int main()
{
	test01();
}