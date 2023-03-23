#include <iostream>
#include <String.h>
using namespace std;
int main(void) {
	string str = "minseo";

	//str.length()도 가능 size()권장
	cout << "문자열의 길이는 " << str.size() << endl;
	return 0;
}