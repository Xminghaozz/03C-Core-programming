#include <iostream>
using namespace std;

//���μ̳и������������̳�ͬһ�����࣬����ĳ����ͬʱ�̳�������������
//���μ̳����⣺��ײ����̳������ݻ�������ݣ�ʹ������ʱ����������ԣ��������ײ�����˵��ֻ��Ҫһ�ݻ��������

//������
class Animal
{public:
	int mAge;
};

//�ϻ�
//������̳н�����μ̳е����⣬�ӹؼ���virtual
//Animal���Ϊ�����
class Tiger:virtual public Animal
{

};

//ʨ��
//������̳н�����μ̳е�����,�ӹؼ���virtual
class Lion :virtual public Animal
{

};

//ʨ����
class TigerLion :public Tiger, public Lion
{

};

void test01()
{
	TigerLion tl1;
	//���������μ̳У���������ӵ����ͬ��Ա�����������������
	tl1.Tiger::mAge = 10;
	tl1.Lion::mAge = 20;
	cout << "tl1.Tiger::mAge =" << tl1.Tiger::mAge << endl;
	cout << "tl1.Lion::mAge =" << tl1.Lion::mAge << endl;
	cout << "tl1.Tiger::mAge =" << tl1.Tiger::mAge << endl;
	cout << "tl1-mAge=" << tl1.mAge << endl;

	//���μ̳е��µײ�����������������ݣ��˷���Դ

}

int main()
{
	test01();
}