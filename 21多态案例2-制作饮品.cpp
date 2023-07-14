#include <iostream>
using namespace std;

class AbstractDrinking
{
public:

	virtual void boil() = 0;//��ˮ

	virtual void brew() = 0;//����

	virtual void pourInCup() = 0;//����

	virtual void addThing() = 0;//�Ӹ���

	void makeDrink()
	{
		boil();
		brew();
		pourInCup();
		addThing();
	}

};

class Tea :public AbstractDrinking
{
public:
	void boil()
	{
		cout << "��ˮ" << endl;
	}

	void brew()
	{
		cout << "���ݲ�Ҷ" << endl;
	}

	void pourInCup()
	{
		cout << "����豭" << endl;
	}

	void addThing()
	{
		cout << "��������" << endl;
	}

};

class Coffee :public AbstractDrinking
{
public:
	void boil()
	{
		cout << "��ˮ" << endl;
	}

	void brew()
	{
		cout << "���ݿ���" << endl;
	}

	void pourInCup()
	{
		cout << "���뿧�ȱ�" << endl;
	}

	void addThing()
	{
		cout << "����ţ�̺���" << endl;
	}

};

void doWork(AbstractDrinking *drink)//����ָ��ָ��������� AbstractDrinking *drink = new Tea/(Coffee)
{
	drink->makeDrink();
	delete drink;//���������������˵���ָ������Ͳ����
	drink = NULL;

}

void test01()
{
	doWork(new Tea);
	cout << "-----------------" << endl;
	doWork(new Coffee);
}

//void doWork(AbstractDrinking& drink)//��������ָ��������� 
//{
//	drink.makeDrink();
//	//delete drink;
//	//drink = NULL;
//
//}
//
//void test01()
//{
//	Tea tea;
//	doWork(tea);
//	cout << "-----------------" << endl;
//	Coffee coffee;
//	doWork(coffee);
//}

int main()
{
	test01();
}