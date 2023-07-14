#include <iostream>
using namespace std;

class AbstractDrinking
{
public:

	virtual void boil() = 0;//煮水

	virtual void brew() = 0;//冲泡

	virtual void pourInCup() = 0;//倒杯

	virtual void addThing() = 0;//加辅料

	void makeDrink()
	{
		boil();
		brew();
		pourInCup();
		addThing();
	}

};

class Tea :public AbstractDrinking
{
public:
	void boil()
	{
		cout << "煮开水" << endl;
	}

	void brew()
	{
		cout << "冲泡茶叶" << endl;
	}

	void pourInCup()
	{
		cout << "倒入茶杯" << endl;
	}

	void addThing()
	{
		cout << "加入柠檬" << endl;
	}

};

class Coffee :public AbstractDrinking
{
public:
	void boil()
	{
		cout << "煮开水" << endl;
	}

	void brew()
	{
		cout << "冲泡咖啡" << endl;
	}

	void pourInCup()
	{
		cout << "倒入咖啡杯" << endl;
	}

	void addThing()
	{
		cout << "加入牛奶和糖" << endl;
	}

};

void doWork(AbstractDrinking *drink)//父类指针指向子类对象 AbstractDrinking *drink = new Tea/(Coffee)
{
	drink->makeDrink();
	delete drink;//堆区的数据销毁了但是指针的类型不会变
	drink = NULL;

}

void test01()
{
	doWork(new Tea);
	cout << "-----------------" << endl;
	doWork(new Coffee);
}

//void doWork(AbstractDrinking& drink)//父类引用指向子类对象 
//{
//	drink.makeDrink();
//	//delete drink;
//	//drink = NULL;
//
//}
//
//void test01()
//{
//	Tea tea;
//	doWork(tea);
//	cout << "-----------------" << endl;
//	Coffee coffee;
//	doWork(coffee);
//}

int main()
{
	test01();
}