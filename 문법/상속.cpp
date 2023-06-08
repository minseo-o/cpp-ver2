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

		switch (color_)
		{
		case COLOR_RED:
			cout << "빨간색" << endl;
			break;
		case COLOR_GREEN:
			cout << "초록색" << endl;
			break;
		case COLOR_BLUE:
			cout << "파란색" << endl;
			break;
		default:
			cout << "이상한색" << endl;
			break;
		}
	}
	
	~Animal() { cout << "Animal 생성자()" << endl; }
	void Bite(void) { cout << "Animal 물다" << endl; }
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
		cout << "귀 길이"<<ear_length << endl;
	}
	~Rabbit(){ cout << "Rabbit 생성자()" << endl; }
private:
	int ear_length;
};

int main(void) {
	Rabbit* rabbit = new Rabbit(COLOR_RED,3,20);
	delete rabbit;
}