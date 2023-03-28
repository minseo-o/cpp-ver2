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
	// c++ string 편리해
	// str2가 str1보다 사전(dictionary)에 더 늦게 나온다. 
	
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