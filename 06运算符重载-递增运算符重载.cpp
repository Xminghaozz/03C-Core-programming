#include <iostream>
using namespace std;
//�ܽ�:ǰ�õ����������ã����õ�������ֵ��
class MyInteger
{
	friend ostream& operator<<(ostream &cout, MyInteger myInt);
public:
	MyInteger()
	{
		mNum = 10;
	}

	//����ǰ��++�����������������Ϊ��һֱ��һ�����ݽ��е�������
	MyInteger & operator++()
	{
		//�Ƚ���++����
		mNum++;
		//�ٽ�������
		return *this;
	}
	//���غ���++����� 
	MyInteger operator++(int) //int����ռλ��������������������ǰ�úͺ��õ���
	{
		//�ȼ�¼��ʱ�Ľ��
		MyInteger temp = *this;
		//�� ����
		mNum++;
		//��󽫼�¼�������
		return temp;
	}

private:
	int mNum;
};

//�������������
ostream& operator<<(ostream &cout, MyInteger myInt)
{
	cout << myInt.mNum << endl;
	return cout;
}

void test01()
{
	MyInteger myInt;
	cout << ++(++myInt) << endl;
}

void test02()
{
	MyInteger myInt2;
	cout << myInt2++ << endl;
	cout << myInt2 << endl;
}

int main()
{
	//test01();
	test02();
}