//C
#include <stdio.h>
#include <string.h>
//c++
#include <iostream>
#include <string>

using namespace std;
//���� data���� �ϳ��� �ǹ� �ִ� ����ü�� ��� ����
//class�� ����Ʈ�� private
class Student {
public:
	//������ : ��ü�� ������ �� ȣ��Ǵ� �Լ� 
	//�����ڰ� �������� ������ default�� �Ű������� ���� �����ڰ� ���ǵȴ�.
	//Student(){}
	Student() {
		name = "��μ�";
		hakbun = 2101;
		age = 18;
		sex = 1;
		department = "���̵�����Ʈ����";

	}
	Student(string _name, int _hakbun, int _age, int _sex, string _department) {
		hakbun = _hakbun;
		name = _name;
		age = _age;
		sex = _sex;
		department = _department;
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
	Student stu1 = Student("������",2100,18,1,"���̵�����Ʈ�����");
	
	stu1.print();
	return 0;
}