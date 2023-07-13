#include <iostream>
using namespace std;

//菱形继承概念：两个派生类继承同一个基类，又有某个类同时继承这两个派生类
//菱形继承问题：最底层的类继承了两份基类的数据，使用数据时会产生二义性；另外对最底层类来说，只需要一份基类的数据

//动物类
class Animal
{public:
	int mAge;
};

//老虎
//利用虚继承解决菱形继承的问题，加关键字virtual
//Animal类称为虚基类
class Tiger:virtual public Animal
{

};

//狮子
//利用虚继承解决菱形继承的问题,加关键字virtual
class Lion :virtual public Animal
{

};

//狮虎兽
class TigerLion :public Tiger, public Lion
{

};

void test01()
{
	TigerLion tl1;
	//当出现菱形继承，两个父类拥有相同成员，需加作用域来区分
	tl1.Tiger::mAge = 10;
	tl1.Lion::mAge = 20;
	cout << "tl1.Tiger::mAge =" << tl1.Tiger::mAge << endl;
	cout << "tl1.Lion::mAge =" << tl1.Lion::mAge << endl;
	cout << "tl1.Tiger::mAge =" << tl1.Tiger::mAge << endl;
	cout << "tl1-mAge=" << tl1.mAge << endl;

	//菱形继承导致底层派生类的数据有两份，浪费资源

}

int main()
{
	test01();
}