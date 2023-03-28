//C
#include <stdio.h>
#include <string.h>
//c++
#include <iostream>
#include <string>

using namespace std;

int main(void) {
	char str1[50] = "Hello";
	char str2[50] = "Aorld";
	//함수 인자 위치 결과 값( -1, 1) 이게 너무 헷갈려
	
	if (str2 >str1) {
		cout <<"str2 > str1";
	}
	else if (str2 < str1) {
		cout << "str2 < str1";
	}
	else  {
		cout << "str2 == str1";
	}
	
	
}