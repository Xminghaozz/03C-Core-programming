#include <iostream>
using namespace std;

//��̳У�C++��ʵ�ʿ����в�����ʹ�ö�̳У��﷨��֧��һ����̳ж������
//�﷨:class ���� :�̳з�ʽ ����1���̳з�ʽ ����2
class Base1
{
public:
	int mA;
	Base1()
	{
		mA = 100;
	}
};

class Base2
{
public:
	int mA;
	Base2()
	{
		mA = 200;
	}
};

class Son:public Base1,public Base2
{
public:
	int mB;
	int mC;
	Son()
	{
		mB = 300;
		mC = 400;
	}
};

void test01()
{
	Son son1;
	cout <<"sizeof(son)="<<sizeof(son1) << endl;//16 ���������������Ա����������1��mA��Ա�͸���2��mA��Ա
	cout << "����Base1��mA=" << son1.Base1::mA << endl;
	cout << "����Base2��mA=" << son1.Base2::mA << endl;
}
int main()
{
	test01();
	return 0;
}