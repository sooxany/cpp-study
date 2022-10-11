#include <iostream>

using namespace std;

int main(void) {

	const int num = 12;
	const int* ptr = &num; //포인터 변수를 선언해서 변수 가리킴
	const int& pointer = *ptr;
	cout << "포인터 변수 이용 : " << *ptr << endl << "참조자 이용 : " << *(&pointer);



	return 0;
}