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
	//������� �ʱ�ȭ�� �ϸ� const ��������� �ʱ�ȭ �� �� �ִ�.
	Student(string _name, int _hakbun, int _age, int _sex, string _department) 
		: name(_name),hakbun(_hakbun),age(_age),sex(_sex),department(_department)
	{
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
	//�����Ҵ�
	//struct Studenet �ڷ��� ( c++������ Studenet�� ��� ��
	Student stu1 = Student("������",2006,18,1,"���̵����������");
	//stu1.print();
	// 
	//�����Ҵ�
	Student* stu2 = new Student("������", 3100, 31, 0, "��ۿ�����");
	stu2->print();
	delete stu2
	return 0;
}