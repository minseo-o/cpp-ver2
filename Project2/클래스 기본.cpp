//C
#include <stdio.h>
#include <string.h>
//c++
#include <iostream>
#include <string>

using namespace std;
//���� data���� �ϳ��� �ǹ� �ִ� ����ü�� ��� ����
//class�� ����Ʈ�� private
class Studenet {
public:
	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ� 
	//�����ڰ� �������� ������ default�� �Ű������� ���� �����ڰ� ���ǵȴ�.
	//Student(){}
	Student() {
		stu1.name = "��μ�";
		stu1.hakbun = 2101;
		stu1.age = 18;
		stu1.sex = 1;
		stu1.department = "���̵�����Ʈ����";

	}

	//Ŭ������ ��������� ���� �� �ִ�. 
	void print(void) {
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;
		cout << "���� : " << age << endl;
		cout << "���� : " << sex << endl;
		cout << "�а� : " << department << endl;
	}
private:
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
	
	stu1.print();
	return 0;
}