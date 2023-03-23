#include <iostream>
#include <string.h>

int main(void) {
	char str[30] = { 0,};
	char str2[30] = "C_insert";
	strcpy(str, str2);
	printf("%s \n", str);  
	return 0;
}