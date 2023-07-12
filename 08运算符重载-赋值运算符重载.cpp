#include <iostream>
using namespace std;

//C++���������ٸ�һ�������4������(ǰ����֮ǰ�Ѿ�������)
//Ĭ�Ϲ��캯��(�޲Σ�������Ϊ��)
//Ĭ����������(�޲Σ�������Ϊ��)
//Ĭ�Ͽ������캯���������Խ���ֵ����
//��ֵ�����operator = �������Խ���ֵ����
//�������������ָ�����������ֵ����ʱҲ�������ǳ�������⡣����ֶ����ڴ��ظ��ͷŵ�����

class Person
{
public:
	Person(int age)
	{
		mAge = new int(age);
	}
	int* mAge;

	~Person()
	{
		if (mAge != NULL)
		{
			delete mAge;
			mAge = NULL;
		}
	}

	Person & operator=(Person& p)
	{
		//������Ĭ���ṩǳ����������Ҫʵ�����������������ڴ��������ָ��
		//mAge = p.mAge;
		//Ӧ�����ж��Ƿ��������ڶ�������������ͷŸɾ���Ȼ�������

		if (mAge != NULL)
		{
			delete mAge;
			mAge = NULL;
		}
		mAge = new int(*p.mAge);//���
		return *this;//���ض����������ʵ�����Ȳ���

	}
};

void test01()
{
	Person p1(18);
	Person p2(20);
	Person p3(25);
	p1 = p2 = p3;
	cout << "p1������Ϊ" << *p1.mAge << endl;
	cout << "p2������Ϊ" << *p2.mAge << endl;
	cout << "p3������Ϊ" << *p3.mAge << endl;

}


int main()
{
	test01();
}