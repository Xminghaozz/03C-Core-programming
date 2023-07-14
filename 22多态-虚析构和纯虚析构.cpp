#include <iostream>
using namespace std;

//�ܽ�:
//�������������������������ͨ������ָ���ͷ������������
//���������û�ж������ݣ����Բ�дΪ��������������
//ӵ�д���������������Ҳ���ڳ�����
class Animal
{
public:
	//���麯��
	virtual void speak() = 0;

	Animal()
	{
		cout << "Animal�Ĺ��캯������" << endl;
	}
	//�������������Խ�� ����ָ���ͷ�������󲻸ɾ�������
	//virtual ~Animal()
	//{
	//	cout << "Animal��������������" << endl;
	//}

	//��������,��Ҫ����Ҳ��Ҫʵ��
	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ��������	
	virtual ~Animal() = 0;
};

//������������ʵ��
Animal::~Animal()
{
	cout << "Animal��������������" << endl;
}

class Cat :public Animal
{
public:

	Cat(string name)
	{
		mName = new string(name);
		cout << "Cat�Ĺ��캯������" << endl;
	}

	void speak()
	{
		cout <<*mName<< "Сè������" << endl;
	}

	~Cat()
	{
		if (mName != NULL)
		{
			cout << "Cat��������������" << endl;
			delete mName;
			mName = NULL;
		}
	}
	string* mName;
};

void test01()
{
	Animal* animal = new Cat("Tom");
	/*
	�����ָ����������ʱ�򣬲�����������е�����������
	������������ж������ԣ�������ڴ��й©�����
	���:�����������������Ϊ������
	*/
	animal->speak();
	delete animal;
	animal = NULL;
}
int main()
{
	test01();
}