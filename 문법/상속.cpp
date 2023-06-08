#include <iostream>
#include <string.h>

using namespace std;
class Animal {
public:
	Animal() { cout << "Animal 생성자()" << endl; }
	~Animal() { cout << "Animal 생성자()" << endl; }
};

class Rabbit :public Animal {
public:
	Rabbit{ cout << "Rabbit 생성자()" << endl; }

};