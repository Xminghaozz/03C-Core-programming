#include <iostream>
using namespace std;

class Base1
{
public:
	int mA;
	Base1()
	{
		mA = 100;
	}
	void func()
	{
		cout << "Base1-func()����" << endl;
	}
	void func(int a)
	{
		cout << "����ͬ�����س�Ա��������" << endl;
	}
};

class Son :public Base1
{
public:
	Son()
	{
		mA = 200;
	}
	void func()
	{
		cout << "����ͬ����Ա��������" << endl;
	}
	int mA;
};

//ͬ����Ա���Դ���ʽ
void test01()
{
	Son son1;
	son1.func();
	//��������г��ֺ͸���ͬ���ĳ�Ա����
	//�����ͬ����Ա�����ص�����������ͬ����Ա����
	//�����Ҫ���ʵ������б����ص�ͬ����Ա��������Ҫ��������
	son1.Base1::func();
	son1.Base1::func(10);

	//���Ҫͨ�����������ʵ������е�ͬ����Ա����Ҫ��������
	cout << son1.mA << endl;
	cout << son1.Base1::mA << endl;

}

int main()
{
	test01();
}