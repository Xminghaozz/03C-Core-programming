#include <iostream>
using namespace std;
//���麯���ͳ�����
class Base1
{
public:
	//ֻҪ��һ�����麯���������ͳ�Ϊ������
	//�ص㣺�޷�ʵ��������
	virtual void func() = 0;//�ؼ��� virtual
	//����������������д����Ĵ��麯��������Ҳ���ڳ����࣬Ҳ�޷�ʵ��������
};

class Son1 :public Base1
{
public:

	int mA;

	void func()
	{
		cout << "Son1��func()��������" << endl;
	}
};

void test01()
{
	//Base1 base1;�޷�ʵ��������
	Son1 son2;
	son2.func();
	son2.mA = 100;
	cout << son2.mA << endl;

	Base1* son1 = new Son1;
	son1->func();
}

int main()
{
	test01();
}