//C
#include <stdio.h>
#include <string.h>
//c++
#include <iostream>
#include <string>

using namespace std;
struct Person {
	int weight;
	int height;
};
struct Actor {
	string name;
	string dialog;
};
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
	Student(string name, int hakbun, int age, int sex, string department) {
		//this : ��ü �ڱ� �ڽ��� ����Ű�� ������
		// �Ű�������� ����������� ���Ƶ� ��������
		this->hakbun = hakbun;
		this->name = name;
		this->age = age;
		this->sex = sex;
		this->department = department;
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
	Student stu1 = Student("������",2006,18,1,"���̵����������");
	stu1.print();
	return 0;
}