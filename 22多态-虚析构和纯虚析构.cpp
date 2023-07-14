#include <iostream>
using namespace std;

//总结:
//虚析构或纯虚析构就是用来解决通过父类指针释放子类对象问题
//如果子类中没有堆区数据，可以不写为虚析构或纯虚析构
//拥有纯虚析构函数的类也属于抽象类
class Animal
{
public:
	//纯虚函数
	virtual void speak() = 0;

	Animal()
	{
		cout << "Animal的构造函数调用" << endl;
	}
	//利用虚析构可以解决 父类指针释放子类对象不干净的问题
	//virtual ~Animal()
	//{
	//	cout << "Animal的析构函数调用" << endl;
	//}

	//纯虚析构,需要声明也需要实现
	//有了纯虚析构之后，这个类也属于抽象类，无法实例化对象	
	virtual ~Animal() = 0;
};

//纯虚析构函数实现
Animal::~Animal()
{
	cout << "Animal纯析构函数调用" << endl;
}

class Cat :public Animal
{
public:

	Cat(string name)
	{
		mName = new string(name);
		cout << "Cat的构造函数调用" << endl;
	}

	void speak()
	{
		cout <<*mName<< "小猫喵喵叫" << endl;
	}

	~Cat()
	{
		if (mName != NULL)
		{
			cout << "Cat的析构函数调用" << endl;
			delete mName;
			mName = NULL;
		}
	}
	string* mName;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	/*
	父类的指针在析构的时候，不会调用子类中的析构函数，
	导致子类如果有堆区属性，会出现内存的泄漏情况。
	解决:将父类的析构函数改为虚析构
	*/
	animal->speak();
	delete animal;
	animal = NULL;
}
int main()
{
	test01();
}