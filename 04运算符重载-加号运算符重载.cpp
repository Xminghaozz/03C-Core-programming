#include <iostream>
using namespace std;
//��������أ������е���������½��ж��壬��������һ�ֹ��ܣ�����Ӧ���㲻ͬ����������
//�Ӻ���������أ�ʵ�������Զ����������͵����

class Person
{
public:
	int mA;
	int mB;

public:
	//��Ա��������+
	/*Person operator+(Person& p1)
	{
		Person result;
		result.mA = this->mA + p1.mA;
		result.mB = this->mB + p1.mB;
		return result;
	}*/
};

//ȫ�ֺ�������+
Person operator+(Person& p1, Person& p2)
{
	Person result;
	result.mA = p1.mA + p2.mA;
	result.mB = p1.mB + p2.mB;
	return result;
}

//������������صĺ�������
Person operator+(Person& p1,int num)
{
	Person result;
	result.mA = p1.mA + num;
	result.mB = p1.mB + num;
	return result;
}


void test01()
{
	Person p1;
	p1.mA = 10;
	p1.mB = 20;

	Person p2;
	p2.mA = 5;
	p2.mB = 5;

	//��Ա�������ر��ʵ���
	//Person p3 = p1.operator+(p2);
	//Person p3 = p1 + p2;//���Լ򻯳�������ʽ

	//ȫ�ֺ������ر��ʵ���
	//Person p3 = operator(p1, p2);
	//Person p3 = p1 + p2;//���Լ򻯳�������ʽ

	//��������صĺ�������
	Person p3 = p1 + 1;
	cout << "p3��ֵ" << p3.mA << endl;
	cout << "p3��ֵ" << p3.mB << endl;

}

int main()
{
	test01();
}