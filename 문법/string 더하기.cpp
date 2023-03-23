//C
#include <stdio.h>
#include <string.h>
//c++
#include <iostream>
#include <string>
int main(void) {
	char str1[30] = "minseo";
	char str2[30] = "kim";
	const int str1_l = strlen(str1);
	const int str2_l= strlen(str2);
	for (int i = strlen(str1); i < str1_l + str2_l; i++) {
		str1[i] = str2[i - str1_l];
	}
	printf("%s \n", str1);
}