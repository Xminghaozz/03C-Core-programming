#include <iostream>
using namespace std;

class Base1
{
public:
	int mA;
protected:
	int mB;
private:
	int mC;
};

class Son1 :public Base1
{
public:
	int mD;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷� D: ��ת�ļ�·�� cd D:\VSworkspace\03C++���ı��
//�鿴���� cl/d1 reportSingleClassLayout���� �ļ���
void test01()
{
	//�ڸ��������зǾ�̬��Ա���Զ��ᱻ����̳�
	//�����е�˽�г�Ա���Ա����������أ���˷��ʲ���������ȷʵ���̳���ȥ 
	cout << "size of Son1=" << sizeof(Son1) << endl;//16
}

int main()
{
	test01();
}