#include <iostream>
using namespace std;
int main(void) {
	int a = 30;			//a:30

	int& ra = a;		//pa : a�� �ּҰ�
	ra = 100;			//pa�� ����Ű�� ���(a) : 100
	cout << "a�� ����" << a << endl;

	return 0;
}