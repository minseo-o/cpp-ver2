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
	Student stu1 = Student("������",2006,18,1,"���̵����������");
	
	struct Person JWP;
	struct Actor KYLee;
	KYLee.name = "�̰濵";
	KYLee.dialog = "�������";
	struct Actor* ptr = &KYLee;
	//ptr->name, (*ptr).name ���� ��� 
	cout << "�̸� : " << ptr->name << endl;
	cout << "��� : " << (*ptr).dialog << endl;
	JWP.height = 186;
	JWP.weight = 82;
	cout << "�̸� :" << KYLee.name << endl;
	cout << "��� :" << KYLee.dialog << endl;
	cout << "Ű : " <<JWP.height << endl; //height�� �����Ͷ� �ּҰ��� ���
	cout << "������ : "<<JWP.weight << endl;
	//stu1.print();
	return 0;
}