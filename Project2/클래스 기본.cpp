//C
#include <stdio.h>
#include <string.h>
//c++
#include <iostream>
#include <string>

using namespace std;
//���� data���� �ϳ��� �ǹ� �ִ� ����ü�� ��� ����
//class�� ����Ʈ�� private
class studenet {
public:
	string name;
	//���ڿ��� ���� �ʴ� ������ ���ɶ����� 
	//�Ϲ������� ���ڿ��� ���������ͺ��� ���� �޸� ������ �䱸
	//������ �񱳿����� �ѹ��� �� �� ������, ���ڿ��� ���ڼ� ��ŭ �ݺ��Ͽ� ��
	int  hakbun;
	int age;
	int sex;// �������� ���������� ���� ���������� �ϴ� ���� ��õ
	string  department;
	
};

int main(void) {
	//struct Studenet �ڷ��� ( c++������ Studenet�� ��� ��
	struct studenet stu1;
	stu1.name = "��μ�";
	stu1.hakbun = 2101;
	stu1.age = 18;
	stu1.sex = 1;
	stu1.department = "���̵�����Ʈ����";
	cout << "�̸� : " << stu1.name << endl;
	cout << "�й� : " << stu1.hakbun << endl;
	cout << "���� : " << stu1.age << endl;
	cout << "���� : " << stu1.sex << endl;
	cout << "�а� : " << stu1.department << endl;
	
	return 0;
}