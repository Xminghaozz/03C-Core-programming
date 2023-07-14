#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//二进制写文件

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
	Person p = {"小李",18};
	ofs.write((const char*)&p, sizeof(Person));
	ofs.close();

	ifstream ifs;
	ifs.open("person.txt",ios::in|ios::binary);
	if (!ifs.is_open())
	{
		cout << "打开文件失败" << endl;
		return;
	}
	ifs.read((char*)&p, sizeof(Person));
	cout << "姓名:" << p.name << " " << "年龄:" << p.age << endl;
	ifs.close();

}

int main()
{
	test01();
}