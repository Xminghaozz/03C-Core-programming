#include <iostream>
using namespace std;

class Building;
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
//����д��Ա����
Building::Building()
{
	mSittingRoom = "����";
	mBedRoom = "����";
}

void test01()
{
	GoodGay();
}

int main()
{
	test01();
}