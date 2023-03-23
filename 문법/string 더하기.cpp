//C
#include <stdio.h>
#include <string.h>
//c++
#include <iostream>
#include <string>
int main(void) {
	char str1[30] = "minseo";
	char str2[30] = "kim";
	strcat(str1, str2);
	
	printf("%s \n", str1);
}