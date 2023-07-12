#include <iostream>
using namespace std;

class MyInteger
{
	friend ostream& operator<<(ostream& cout, MyInteger myInt);
public:
	MyInteger()
	{
		mNum = 10;
	}

	//ǰ��--���������
	MyInteger& operator--()
	{
		--mNum;
		return *this;
	}
	//����--���������
	MyInteger operator--(int)
	{
		MyInteger temp;
		temp = *this;
		mNum--;
		return temp;
	}

private:
	int mNum;
};

ostream& operator<<(ostream& cout, MyInteger myint)
{
	cout << myint.mNum << endl;
	return cout;
}
void test01()
{
	MyInteger myInt;
	cout << --myInt << endl;
}

void test02()
{
	MyInteger myInt2;
	cout << myInt2-- << endl;
	cout << myInt2 << endl;

}

int main()
{
	test01();
	test02();
}