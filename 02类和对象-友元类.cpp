#include <iostream>
using namespace std;

class Building
{
	//�������Building����Ԫ�࣬���Է��ʸ����˽�г�Ա
	friend class GoodGay;
public:
	string mSittingRoom;

	Building()
	{
		mSittingRoom = "����";
		mBedRoom = "����";
	}

private:
	string mBedRoom;
};


class GoodGay
{
public:
	GoodGay()
	{
		//�������������
		building = new Building;
	}
	void visit()//�ιۺ���������Building�е�����
	{
		cout << "�û������ڷ��ʣ�" << building->mSittingRoom << endl;
		cout << "�û������ڷ��ʣ�" << building->mBedRoom << endl;

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