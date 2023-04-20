//C
#include <stdio.h>
#include <string.h>
//c++
#include <iostream>
#include <string>

using namespace std;
//여러 data들을 하나의 의미 있는 구조체로 묶어서 관리
//class는 디폴트가 private
class Student {
public:
	//생성자 : 객체가 생성될 때 호출되는 함수 
	//생성자가 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다.
	// 생성자함수의 이름은 클래스명과 같다
	//Student(){}
	Student() {
		

	}
	//멤버변수 초기화를 하면 const 멤버변수도 초기화 할 수 있다.
	Student(string _name, int _hakbun, int _age, int _sex, string _department) 
		: name(_name),hakbun(_hakbun),age(_age),sex(_sex),department(_department)
	{
	}
	//소멸자 객체가 메모리에서 해제될 때 호출되는 함수 
	// ~클래스명()
	// - 생성자처럼 반환형이 없음 생성자와 다르게 매개변수가 없다 
	// -default로 컴파일러가 자동으로 생성
	//클래스는 멤버변수를 가질 수 있다. 
	void print(void) {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
		cout << "나이 : " << age << endl;
		cout << "성별 : " << sex << endl;
		cout << "학과 : " << department << endl;
	}
	void set_name(string _name) { name = _name; }
	void set_hakbun(int _hakbun) { hakbun = _hakbun; }
	void set_age(int _age) { age = _age; }
	void set_sex(int _sex) { sex = _sex; }
	void set_department(string _department) { department = _department; }


private:
	string name;
	//문자열로 하지 않는 이유는 성능때문에 
	//일반적으로 문자열은 정수데이터보다 많은 메모리 공간을 요구
	//정수는 비교연산을 한번에 할 수 있으나, 문자열은 글자수 만큼 반복하여 비교
	int  hakbun;
	int age;
	int sex;// 가독성과 유지보수를 위해 열거형으로 하는 것을 추천
	string  department;
	


	
};

int main(void) {
	////정적할당 : 메모리의 크기가 컴파일할 때 결정됨
	////struct Studenet 자료형 ( c++에서는 Studenet만 써두 댐
	//Student stu1 = Student("뉴진스",2006,18,1,"뉴미디어소프웨어과");
	////stu1.print();
	//// 
	/*Student stu3[2];
	for (int i = 0; i <2; i++) {
		stu3[i].print();
	}*/
	//stu[i]: *(stu+i) 같은 말

	Student* stu4 = new Student[2];
	stu4[0].set_age(18);
	stu4[0].set_name("지수");
	stu4[0].set_hakbun(2112);
	stu4[0].set_sex(1);
	stu4[0].set_department("뉴미디어소프트웨어과");

	stu4[0].set_age(18);
	stu4[0].set_name("혁수");
	stu4[0].set_hakbun(2118);
	stu4[0].set_sex(0);
	stu4[0].set_department("뉴미디어소프트웨어과");
	for (int i = 0; i < 2; i++) {
		stu4[i].print(); //배열의 요소에 해당하는 객체는 멤버를 .으로 접근 
	}
	delete[] stu4;

	////동적할당 : 메모리의 크기가 실행할 때(runtime)결정됨 heep 영역
	////c++의 동적할당은 반드시 delete로 해제해야 메모리 누수를 막을 수 있음
	//Student* stu2 = new Student("서강준", 3100, 31, 0, "방송연예과");
	//stu2->print();
	//delete stu2
	return 0;
}