#include <stdio.h>
#include <String.h>
int main(void) {
	char str[30] = "minseo";
	int size = 0;
	for (int i = 0; str[i] != '\0'; i++) {
		size++;
	}
	printf("문자열의 크기는 %d \n", size);
	return 0;
}