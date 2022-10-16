#include <iostream>

using namespace std;

class Printer {
	char str[100];
public:
	void setString(const char *string);
	void showString();
};

void Printer::setString(const char *string) {

	strcpy_s(str, string);

}

void Printer::showString() {
	cout << str << endl;
}

int main(void) {

	Printer pnt;
	pnt.setString("Hello world!");
	pnt.showString();
	
	pnt.setString("I love C++");
	pnt.showString();



	return 0;
}