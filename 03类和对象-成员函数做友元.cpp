#include <iostream>
using namespace std;

class Building;
class GoodGay
{
public:

	GoodGay();
	
	void visit1();//��Building�����Ԫ����

	void visit2();//������Ԫ����
	
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

//��������������ԭ��
//1��GoodGay�еĹ��캯����Ҫ����Building�еĹ��캯��������GoodGay���й��캯����ʵ�ֱ�����Building�ඨ��֮��
//2��GoodGay����Ҫ����Building�����������Building�������GoodGay��֮ǰ����
//3��Building��Ķ�������Ҫ��GoodGay��ĳ�Ա������������Ԫ����������Building�������GoodGay��֮����
Building::Building()
{
		mSittingRoom = "����";
		mBedRoom = "����";
}


GoodGay::GoodGay()
{
	building = new Building;
}

void GoodGay::visit1()
{
	cout << "�û���visit1���ڷ��ʣ�" << building->mSittingRoom << endl;
	cout << "�û���visit1���ڷ��ʣ�" << building->mBedRoom << endl;
}

void GoodGay::visit2()
{
	cout << "�û���visit2���ڷ��ʣ�" << building->mSittingRoom << endl;
	//cout << "�û���visit2���ڷ��ʣ�" << building->mBedRoom << endl;����Ԫ�������޷�����Building���˽�г�Ա
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