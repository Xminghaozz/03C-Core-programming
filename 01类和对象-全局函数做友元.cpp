#include <iostream>
using namespace std;

//��Ԫ��Ŀ�ľ�����һ������������ ������һ�����е�˽��Ԫ�ء�
//��Ԫ�Ĺؼ��֡���friend
class Building
{
	//ȫ�ֺ�������Ԫ������ȫ�ֺ����Ϳ��Է���Building�е�˽�г�Ա 
	friend void goodGay(Building& building1);
public:
	Building()
	{
		mSittingRoom = "����";
		mBedRoom = "����";
	}

	string mSittingRoom;

private:
	string mBedRoom;
};

void goodGay(Building & building1)
{
	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << building1.mSittingRoom << endl;

	cout << "�û���ȫ�ֺ������ڷ��ʣ�" << building1.mBedRoom << endl;

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