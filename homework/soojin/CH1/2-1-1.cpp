#include <iostream>

using namespace std;

void increase(int &ptr) {

	ptr += 1;
	cout << ptr;
	
};

void reverse(int& ptr1) {

	ptr1 *= -1;
	cout << ptr1;
};

int main(void) {

	int r;

	cout << "number: ";
	cin >> r;
	cout << "increase: ";
	increase(r);
	cout << endl;
	cout << "reverse: ";
	reverse(r);

	return 0;
}