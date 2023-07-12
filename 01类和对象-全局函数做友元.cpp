#include <iostream>
using namespace std;

//友元的目的就是让一个函数或者类 访问另一个类中的私有元素。
//友元的关键字——friend
class Building
{
	//全局函数做友元，这样全局函数就可以访问Building中的私有成员 
	friend void goodGay(Building& building1);
public:
	Building()
	{
		mSittingRoom = "客厅";
		mBedRoom = "卧室";
	}

	string mSittingRoom;

private:
	string mBedRoom;
};

void goodGay(Building & building1)
{
	cout << "好基友全局函数正在访问：" << building1.mSittingRoom << endl;

	cout << "好基友全局函数正在访问：" << building1.mBedRoom << endl;

}

void test01()
{
	Building building1;
	goodGay(building1);
}

int main()
{
	test01();
}