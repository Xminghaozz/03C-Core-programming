#include <iostream>
using namespace std;

//��̬��C++���������������֮һ
//��̬��Ϊ���ࣺ
//1����̬��̬���������غ�������������ھ�̬��̬�����ú�����
//2����̬��̬����������麯��ʵ������ʱ��̬
//���𣺾�̬��̬�ĺ�����ַ���-����׶�ȷ��������ַ
//		��̬��̬�ĺ�����ַ���-���н׶�ȷ��������ַ

class Animal
{
public:
	virtual void speak()//�麯�����ӹؼ���virtualʵ�ֵ�ַ���
	//��̬��̬��������
	//1���м̳й�ϵ
	//2������Ҫ��д������麯�� ��дҪ�󣺺�������ֵ���ͣ������б���������ȫ��ͬ
	

	{
		cout << "������˵��" << endl;
	}
};

class Cat :public Animal
{
public:
	void speak()
	{
		cout << "Сè��������" << endl;
	}
};

class Dog :public Animal
{
public:
	void speak()
	{
		cout << "С����������" << endl;
	}
};

//��ַ�Ȱ󶨣��ڱ���׶ξ��Ѿ�ȷ��������ַ
//�����Ҫ��è˵������ô������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ΰ�-��ַ��󶨣��ڻ��෽��ǰ�ӹؼ���virtual
void doSpeak(Animal& animal)//��̬��̬��ʹ�ã������ָ������� ָ�����ഫ��Ķ���
{
	animal.speak();
}

void test01()
{
	Cat cat;
	doSpeak(cat);

	Dog dog;
	doSpeak(dog);
}


int main()
{
	test01();
}