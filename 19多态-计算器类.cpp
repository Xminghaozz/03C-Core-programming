#include <iostream>
using namespace std;

//使用多态好处
//1.组织结构清晰
//2.可读性强
//3.后期扩展和可维护性高
class Calculator
{
public:
	int mNum1;
	int mNum2;

	virtual int getResult()
	{
		return 0;
	}
};

class AddCalculator :public Calculator
{
	int getResult()
	{
		return mNum1 + mNum2;
	}
};

class SubCalculator :public Calculator
{
	int getResult()
	{
		return mNum1 - mNum2;
	}
};

class MulCalculator :public Calculator
{
	int getResult()
	{
		return mNum1 * mNum2;
	}
};

void test01()
{
	//多态使用条件：父类指针或引用指向子类对象
	Calculator *cal = new AddCalculator;
	cal->mNum1 = 1;
	cal->mNum2 = 2;
	cout << cal->getResult() << endl;
	delete cal;

	cal = new SubCalculator;
	cal->mNum1 = 5;
	cal->mNum2 = 3;
	cout << cal->getResult() << endl;
	delete cal;
	cal = NULL;

	Calculator* cal2 = new MulCalculator;
	cal2->mNum1 = 2;
	cal2->mNum2 = 5;
	cout << cal2->getResult() << endl;

}

int main()
{
	test01();
}