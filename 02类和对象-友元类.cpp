#include <iostream>
using namespace std;

class Building
{
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