#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//������д�ļ�

class Person
{
public:
	char name[64];
	int age;
};

void test01()
{
	ofstream ofs;
	ofs.open("person.txt",ios::out| ios::binary);
	Person p = {"С��",18};
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();

	ifstream ifs;
	ifs.open("person.txt",ios::in|ios::binary);
	if (!ifs.is_open())
	{
		cout << "���ļ�ʧ��" << endl;
		return;
	}
	ifs.read((char*)&p, sizeof(Person));
	cout << "����:" << p.name << " " << "����:" << p.age << endl;
	ifs.close();

}

int main()
{
	test01();
}