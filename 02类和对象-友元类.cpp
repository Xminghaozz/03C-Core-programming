#include <iostream>
using namespace std;

class Building
{
	//这个类是Building的友元类，可以访问该类的私有成员
	friend class GoodGay;
public:
	string mSittingRoom;

	Building()
	{
		mSittingRoom = "客厅";
		mBedRoom = "卧室";
	}

private:
	string mBedRoom;
};


class GoodGay
{
public:
	GoodGay()
	{
		//创建建筑物对象
		building = new Building;
	}
	void visit()//参观函数，访问Building中的属性
	{
		cout << "好基友正在访问：" << building->mSittingRoom << endl;
		cout << "好基友正在访问：" << building->mBedRoom << endl;

	}
	Building* building;

};

void test01()
{
	GoodGay gg;
	gg.visit();
}

int main()
{
	test01();
}