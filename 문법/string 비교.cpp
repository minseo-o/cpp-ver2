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

	const int s1_l = strlen(str1);
	const int s2_l = strlen(str2);

	const int l = s1_l < s2_l ? s1_l : s2_l;
	for (int i = 0; i < l; i++) {
		if (str1[i] < str2[i]) {
			printf("str2 > str1 \n");
			break;
		}
		else if (str1[i] > str2[i]) {
			printf(" str1 >str2 \n");
			break;
		}
	}
	int i;
	if (i == l) {
		if (s1_l > s2_l) {
			printf("str2 <str1 \n");
		}
		else if (s1_l <s2_l) {
			printf("str2 <str1 \n");
		}
		else {
			printf("str2 == str1 \n");
		}
	}
	
	
}