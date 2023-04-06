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
//여러 data들을 하나의 의미 있는 구조체로 묶어서 관리
//class는 디폴트가 private
class Student {
public:
	//생성자 : 객체가 생성될 때 호출되는 함수 
	//생성자가 정의하지 않으면 default로 매개변수가 없는 생성자가 정의된다.
	//Student(){}
	Student() {
		name = "김민서";
		hakbun = 2101;
		age = 18;
		sex = 1;
		department = "뉴미디어소프트웨어";

	}
	Student(string _name, int _hakbun, int _age, int _sex, string _department) {
		hakbun = _hakbun;
		name = _name;
		age = _age;
		sex = _sex;
		department = _department;
	}
	//클래스는 멤버변수를 가질 수 있다. 
	void print(void) {
		cout << "이름 : " << name << endl;
		cout << "학번 : " << hakbun << endl;
		cout << "나이 : " << age << endl;
		cout << "성별 : " << sex << endl;
		cout << "학과 : " << department << endl;
	}

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
	//struct Studenet 자료형 ( c++에서는 Studenet만 써두 댐
	Student stu1 = Student("뉴진스",2006,18,1,"뉴미디어소프웨어과");
	
	struct Person JWP;
	struct Actor KYLee;
	KYLee.name = "이경영";
	KYLee.dialog = "진행시켜";
	struct Actor* ptr = &KYLee;
	//ptr->name, (*ptr).name 같은 결과 
	cout << "이름 : " << ptr->name << endl;
	cout << "대사 : " << (*ptr).dialog << endl;
	JWP.height = 186;
	JWP.weight = 82;
	cout << "이름 :" << KYLee.name << endl;
	cout << "대사 :" << KYLee.dialog << endl;
	cout << "키 : " <<JWP.height << endl; //height가 포인터라 주소값이 출력
	cout << "몸무게 : "<<JWP.weight << endl;
	//stu1.print();
	return 0;
}