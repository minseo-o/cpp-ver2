#include <iostream>
#include <string>
#include <string.h>

using namespace std;

class MString {
public:
	MString(const char* str)
	{
		unsigned int str_length = strlen(str);
		// 필요한 길이만큼 문자열 동적할당
		c_str_ = new char[str_length + 1];	// '/0'(널문자) 공간 +1
		strcpy(c_str_, str);
		cout << "MString 생성자 호출 완료" << endl;
	}
	~MString() {
		//생성자에 동적할당한 공간을 해제 
		delete[] c_str_;
		cout << "MString 소멸자 호출 완료" << endl;
	}
	//얕은복사/깊은복사
	//깊은 복사는 두 개의 객체가 생성되는 것이고, 얕은 복사는 객체는 한개가 생성되며 그 객체에 접근하는 포인터가 두 개인 것을 말한다.
	unsigned int size() { return size_; }
	char* c_str() { return c_str_; }
private:
	unsigned int size_;			// 문자열의 길이
	char* c_str_;				// 문자열을 가리키는 주소
};

int main(void)
{
	MString str1 = MString("Aitai");
	cout<< str1.c_str() << endl;

	return 0;

}