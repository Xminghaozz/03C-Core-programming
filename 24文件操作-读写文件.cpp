#include<iostream>
#include<fstream>
#include<string>
using namespace std;

//�ļ�����
//��������ʱ�����������ݶ�������ʱ���ݣ�����һ�����н����ͻᱻ�ͷš�
// 
//ͨ���ļ����Խ����ݳ־û���
//C++�ж��ļ����в�����Ҫ����ͷ�ļ�< Fstream>
//
//�ļ����ͷ�Ϊ����:
//�ı��ļ� - �ļ����ı���ASCII����ʽ�洢�ڼ������
//�������ļ� - �ļ����ı��Ķ�������ʽ�洢�ڼ�����У��û�һ�㲻��ֱ�Ӷ�������
//�����ļ���������
//
//ofstream : д����
//ifstream��������
//fstream : ��д����

//�ı��ļ�
//д�ļ�
//����ͷ�ļ�����#include< fstream>


void test01()
{
	//���������󡪡�ofstream ofs;
	ofstream ofs;
	//���ļ�����ofs.open(���ļ�·����, �򿪷�ʽ)
	ofs.open("test.txt", ios::out);
	//д���ݡ���ofs << ��д������ݡ�;
	ofs << "��˾��������������Ƽ�" << endl;
	ofs << "�����أ���������" << endl;
	//�ر�������ofs.close();
	ofs.close();

	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open())
	{
		cout << "�ļ���ʧ��" << endl;
		return;
	}
	/*char buf[1024] = { 0 };
	while (ifs>>buf)
	{
		cout << buf << endl;
	}��һ�ֶ�ȡ��ʽ*/

	/*char buf[1024] = { 0 };
	while (ifs.getline(buf,sizeof(buf)))
	{
		cout << buf << endl;
	}�ڶ��ַ�ʽ*/

	string buf;
	while (getline(ifs,buf))
	{
		cout << buf << endl;
	}//�����ַ�ʽ

	//char c;
	//while ((c = ifs.get()) != EOF)//EOF����end of file
	//{
	//	cout << c;
	//}�����ַ�ʽ�����Ƽ�
	ifs.close();
}

int main()
{
	test01();
}