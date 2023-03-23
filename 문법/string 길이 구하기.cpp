#include <iostream>
using namespace std;

int sum(int a, int b) {
	return a + b;
}
float sum(float a, float b) {
	return a + b;
}
int main(void)
{
	cout << sum_float(1.1f, 2.2f) << endl;
	cout << sum_int(1,2) << endl;
	return 0;
}