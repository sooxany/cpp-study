#include <iostream>

using namespace std;

int main(void) {

	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++) {
		cout << i << "��° ������" << rand() % 100 << endl;

	}




	return 0;
}