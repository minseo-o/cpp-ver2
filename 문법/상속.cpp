#include <iostream>
#include <string.h>
using namespace std;
#define COLOR_RED	0
#define COLOR_GREEN	1
#define COLOR_BLUE	2

class Animal {
public:
	Animal(int color,int age): color_(color),age_(age)
	{
		cout << "Animal 생성자()" << endl; 
		cout << age_ <<"살" << endl;

		
	}
	
	~Animal() { cout << "Animal 생성자()" << endl; }
	void Roar(void) { cout << "Animal 짖다" << endl; }
	void Eat(void) { cout << "Animal 먹다" << endl; }
	void Sleep(void) { cout << "Animal 자다" << endl; }

private:
	int color_;
	int age_;
};

class Rabbit :public Animal {
public:
	//부무생성자가 먼저 호출
	Rabbit(int color,int age,int ear_length):Animal(color,age)
	{
		cout << "Rabbit 생성자()" << endl; 
	}
	~Rabbit(){ cout << "Rabbit 생성자()" << endl; }

	//함수 override
	//다형성(polymorphism):같은 함수 시그니처(반환형, 이름, 매개변수가 모두 같은)가 다르게 실행되는 것
	//불구하구 다르게 실행되는 것
	void Roar(void) {
		cout << "깡총깡총" << endl;
	}
private:
	int ear_length;
};

int main(void) {

	Rabbit* rabbit = new Rabbit(COLOR_BLUE,30);//부모의 생성자도 호출
	rabbit->Roar();//부모의 멤버함수
	delete rabbit;

	Rabbit* rabbit = new Rabbit(COLOR_BLUE,3,20);//부모의 생성자도 호출
	rabbit->Roar();//동물 짖어(C++은 호출할 멤버변수가 정적(컴파일 시간)으로 결정
	delete rabbit;
}