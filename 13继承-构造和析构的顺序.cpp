#include <iostream>
using namespace std;

class Base1
{
public:
	int mA;
	Base1()
	{
		cout << "����Ĺ��캯������" << endl;
	}

	~Base1()
	{
		cout << "�����������������" << endl;
	}
};

class Son1 :public Base1
{
public:
	int mB;
	Son1()
	{
		cout << "����Ĺ��캯������" << endl;
	}

	~Son1()
	{
		cout << "�����������������" << endl;
	}
};

void test01()
{
	//�̳��еĹ���˳��Ϊ���ȹ��츸�࣬��������
	//�̳��е�����˳��Ϊ�����������࣬����������
	Son1 son1;
}

int main()
{
	test01();
}