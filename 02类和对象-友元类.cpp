#include <iostream>
using namespace std;

class Building;
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

class Building
{
public:
	string mSittingRoom;

private:
	string mBedRoom;
};
//类外写成员函数
Building::Building()
{
	mSittingRoom = "客厅";
	mBedRoom = "卧室";
}

void test01()
{
	GoodGay();
}

int main()
{
	test01();
}