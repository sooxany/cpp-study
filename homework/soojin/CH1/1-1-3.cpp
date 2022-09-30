#include <iostream>

using namespace std;

int main(void) {

	int num;
	int result[100];

	cin >> num;

	for (int i = 1; i < 10; i++) {

		result[i] = num * i;

		cout << num << "x" << i << " = " << result[i] << endl;
	}


	return 0;
}