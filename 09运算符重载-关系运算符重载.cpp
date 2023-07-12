#include <iostream>
using namespace std;

class Person
{
public:
	string name;
	int age;

	Person(string name, int age)
	{
		this->name = name;
		this->age = age;
	}

	//重载关系运算符==
	bool operator==(Person &p)
	{
		if (this->name == p.name && this->age == p.age)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	bool operator!=(Person& p)
	{
		if (this->name == p.name && this->age == p.age)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
};

void test01()
{
	Person p1("tom",18);
	Person p2("tom", 18);

	if (p1 == p2)
	{
		cout << "p1和p2是相等的" << endl;
	}
	else
	{
		cout << "p1和p2是不相等的" << endl;
	}

	if (p1 != p2)
	{
		cout << "p1和p2是不相等的" << endl;
	}
	else
	{
		cout << "p1和p2是相等的" << endl;
	}

}

int main()
{
	test01();
}