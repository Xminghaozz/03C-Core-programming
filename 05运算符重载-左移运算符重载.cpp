#include <iostream>
using namespace std;

//�������������������Զ�����������
class Person
{
	//�����Ա����Ϊ˽�У���ô���Խ�ȫ����������غ�����Ϊ�����Ԫ����
	friend ostream& operator<<(ostream& cout, Person& p1);
	friend void test01();
//public:
//	int mA;
//	int mB;

	//���ó�Ա�����������������p.operator<<(cout)�򻯰汾p<<cout
	//һ�����ǲ������ó�Ա����������<<���������Ϊ�޷�ʵ��cout�����
private:
	int mA;
	int mB;

};

//ֻ������ȫ�ֺ����������������
ostream &operator<<(ostream& cout, Person& p1) //����д�ı��ʾ���operator << (cout, p)�򻯰汾����cout << p;
{
	cout << "mA=" << p1.mA << " mB=" << p1.mB;
	return cout;
}


void test01()
{
	Person p1;
	p1.mA = 10;
	p1.mB = 5;

	cout << p1 << endl;
}

int main()
{
	test01();
}