#include <iostream>
using namespace std;

//�������������()Ҳ��������


class MyPrintf
{
public:
	//���غ������������()
	void operator()(string text)
	{
		cout << text << endl;
	}
};


//�º���û�й̶�д�����ǳ����
class MyAdd
{
public:
	int operator()(int a, int b)
	{
		return a + b;
	}
};

void test01()
{
	MyPrintf myPrint;
	myPrint("hello world");//�������غ�ʹ�õķ�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���

	MyAdd myAdd;
	int a = myAdd(1, 2);
	cout << a << endl;
	//�����������������������󡪡��ص�:��ǰ�б�ִ���������ͷ�
	cout << MyAdd()(10, 5) << endl;
}

int main()
{
	test01();
}
