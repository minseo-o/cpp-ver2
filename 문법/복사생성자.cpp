#include <iostream>
#include <string.h>

using namespace std;

class Student
{
private:
    int nHakbun;
    char* sName;

public:
    Student();
    Student(int Hakbun, const char* Name);
    Student(const Student& rhs);
    ~Student();

    void show();
};

Student::Student()
{
}

Student::Student(int Hakbun, const char* Name)
    : nHakbun(Hakbun)
{
    cout << "일반생성자 호출." << endl;
    int len = strlen(Name) + 1;
    sName = new char[len];
    strcpy(sName, Name);
}

Student::Student(const Student& rhs)
    : nHakbun(rhs.nHakbun)
{
    int len = strlen(rhs.sName) + 1;
    sName = new char[len];
    strcpy(sName, rhs.sName);
}

Student::~Student()
{
    delete[] sName;
    cout << "소멸자 호출" << endl;
}

void Student::show()
{
    cout << "학번은 " << nHakbun << "입니다" << endl;
    cout << "이름은 " << sName << "입니다" << endl << endl;
}

int main(void)
{
    Student stu1 = Student(1111, "JWP");
    Student stu2 = stu1;

    stu1.show();
    stu2.show();

    return 0;
}
