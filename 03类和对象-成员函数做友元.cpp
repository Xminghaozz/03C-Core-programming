#include <iostream>
using namespace std;

class Building;
class GoodGay
{
public:

	GoodGay();
	
	void visit1();//做Building类的友元函数

	void visit2();//不做友元函数
	
public:
	Building* building;
};

class Building
{
	friend void GoodGay::visit1();
public:
	string mSittingRoom;
private:
	string mBedRoom;

public:
	Building();
	
};

//类外声明函数，原因：
//1、GoodGay中的构造函数需要调用Building中的构造函数，所以GoodGay类中构造函数的实现必须在Building类定义之后，
//2、GoodGay类需要声明Building类变量，所以Building类必须在GoodGay类之前声明
//3、Building类的定义中需要将GoodGay类的成员函数声明成友元函数，所以Building类必须在GoodGay类之后定义
Building::Building()
{
		mSittingRoom = "客厅";
		mBedRoom = "卧室";
}


GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit1()
{
	cout << "好基友visit1正在访问：" << building->mSittingRoom << endl;
	cout << "好基友visit1正在访问：" << building->mBedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "好基友visit2正在访问：" << building->mSittingRoom << endl;
	//cout << "好基友visit2正在访问：" << building->mBedRoom << endl;非友元函数，无法访问Building类的私有成员
}

void test01()
{
	GoodGay gg;
	gg.visit1();
	gg.visit2();
}

int main()
{
	test01();
}