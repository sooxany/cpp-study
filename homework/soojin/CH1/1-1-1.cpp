#include <iostream>

using namespace std;

int main(void) {

	int num[100];
	int sum = 0;

	for (int i = 1; i < 6; i++) {
		cout << i << "��° ���� �Է�: " ; //korea why ji won an dam (crycry)?
		cin >> num[i];
		sum += num[i];

	}

	cout << "sum : " << sum;


	return 0;
}
