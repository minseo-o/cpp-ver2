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

	int result = strcmp(str1, str2);
	if (result == -1) {
		printf("str2 > str1");
	}
	else if (result == 1) {
		printf("str2 < str1");
	}
	else if (result == 0) {
		printf("str2 == str1");
	}
	
	
}