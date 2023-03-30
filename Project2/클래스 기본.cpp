//C
#include <stdio.h>
#include <string.h>
//c++
#include <iostream>
#include <string>

using namespace std;
//여러 data들을 하나의 의미 있는 구조체로 묶어서 관리
//class는 디폴트가 private
class studenet {
public:
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
	struct studenet stu1;
	stu1.name = "김민서";
	stu1.hakbun = 2101;
	stu1.age = 18;
	stu1.sex = 1;
	stu1.department = "뉴미디어소프트웨어";
	cout << "이름 : " << stu1.name << endl;
	cout << "학번 : " << stu1.hakbun << endl;
	cout << "나이 : " << stu1.age << endl;
	cout << "성별 : " << stu1.sex << endl;
	cout << "학과 : " << stu1.department << endl;
	
	return 0;
}