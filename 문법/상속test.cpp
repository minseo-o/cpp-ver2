#include <iostream>
#include <string.h>
using namespace std;

class Person {
public:
	string name;
	int hakbun;
	Person(string name_, int hakbun_) {
		name = name_;
		hakbun = hakbun_;
	}
};
class Student :public Person {
public:
	Student(string name_,int hakbun_):Person(name_,hakbun_){}
	void printshow() {
		cout << "이름: " << name << endl;
		cout << "학번: " << hakbun << endl;
	}
};


int main(void) {
	Student st("김민서", 2101);
	st.printshow();
	return 0;
}