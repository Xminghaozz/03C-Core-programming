#include <iostream>
using namespace std;

//�ܽ�:ͬ����̬��Ա����ʽ�ͷǾ�̬����ʽһ����ֻ���������ַ��ʵķ�ʽ(ͨ�����������)��
class Base1
{
public:
	static int mA;

	static void func()
	{
		cout << "Base1-func()��̬��������" << endl;
	}
	static void func(int a)
	{
		cout << "����ͬ�����ؾ�̬��Ա��������" << endl;
	}
};

int Base1::mA = 100;

class Son :public Base1
{
public:

	static void func()
	{
		cout << "����ͬ����̬��Ա��������" << endl;
	}
	static int mA;
};
int Son::mA = 200;

//ͬ����̬��Ա���Դ���ʽ
void test01()
{
	Son son1;
	cout << "ͨ���������" << endl;
	son1.func();
	//��������г��ֺ͸���ͬ���ľ�̬��Ա����
	//�����ͬ����Ա�����ص�����������ͬ����̬��Ա����
	//�����Ҫ���ʵ������б����ص�ͬ����̬��Ա��������Ҫ��������
	son1.Base1::func();
	son1.Base1::func(10);

	//ͨ���������������
	cout << "ͨ����������" << endl;
	Son::func();
	Son::Base1::func();

	//���Ҫͨ�����������ʵ������е�ͬ����̬��Ա����Ҫ��������
	cout << son1.mA << endl;
	cout << Son::mA << endl;
	cout << son1.Base1::mA << endl;
	cout << Son::Base1::mA << endl;


}

int main()
{
	test01();
}