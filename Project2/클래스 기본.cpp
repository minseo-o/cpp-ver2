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
	// �������Լ��� �̸��� Ŭ������� ����
	//Student(){}
	Student() {
		

	}
	//������� �ʱ�ȭ�� �ϸ� const ��������� �ʱ�ȭ �� �� �ִ�.
	Student(string _name, int _hakbun, int _age, int _sex, string _department) 
		: name(_name),hakbun(_hakbun),age(_age),sex(_sex),department(_department)
	{
	}
	//�Ҹ��� ��ü�� �޸𸮿��� ������ �� ȣ��Ǵ� �Լ� 
	// ~Ŭ������()
	// - ������ó�� ��ȯ���� ���� �����ڿ� �ٸ��� �Ű������� ���� 
	// -default�� �����Ϸ��� �ڵ����� ����
	//Ŭ������ ��������� ���� �� �ִ�. 
	void print(void) {
		cout << "�̸� : " << name << endl;
		cout << "�й� : " << hakbun << endl;
		cout << "���� : " << age << endl;
		cout << "���� : " << sex << endl;
		cout << "�а� : " << department << endl;
	}
	void set_name(string _name) { name = _name; }
	void set_hakbun(int _hakbun) { hakbun = _hakbun; }
	void set_age(int _age) { age = _age; }
	void set_sex(int _sex) { sex = _sex; }
	void set_department(string _department) { department = _department; }


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
	////�����Ҵ� : �޸��� ũ�Ⱑ �������� �� ������
	////struct Studenet �ڷ��� ( c++������ Studenet�� ��� ��
	//Student stu1 = Student("������",2006,18,1,"���̵����������");
	////stu1.print();
	//// 
	/*Student stu3[2];
	for (int i = 0; i <2; i++) {
		stu3[i].print();
	}*/
	//stu[i]: *(stu+i) ���� ��

	Student* stu4 = new Student[2];
	stu4[0].set_age(18);
	stu4[0].set_name("����");
	stu4[0].set_hakbun(2112);
	stu4[0].set_sex(1);
	stu4[0].set_department("���̵�����Ʈ�����");

	stu4[0].set_age(18);
	stu4[0].set_name("����");
	stu4[0].set_hakbun(2118);
	stu4[0].set_sex(0);
	stu4[0].set_department("���̵�����Ʈ�����");
	for (int i = 0; i < 2; i++) {
		stu4[i].print(); //�迭�� ��ҿ� �ش��ϴ� ��ü�� ����� .���� ���� 
	}
	delete[] stu4;

	////�����Ҵ� : �޸��� ũ�Ⱑ ������ ��(runtime)������ heep ����
	////c++�� �����Ҵ��� �ݵ�� delete�� �����ؾ� �޸� ������ ���� �� ����
	//Student* stu2 = new Student("������", 3100, 31, 0, "��ۿ�����");
	//stu2->print();
	//delete stu2
	return 0;
}