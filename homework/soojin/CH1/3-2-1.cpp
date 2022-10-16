#include <iostream>

using namespace std;

class Calculator {
	int add;
	int div;
	int min;
	int mul;
public:
	void Init();
	double Add(double, double);
	double Div(double, double);
	double Min(double, double);
	double Mul(double, double);
	void ShowOpCount();
};

void Calculator::Init() {

	add = 0;
	div = 0;
	min = 0;
	mul = 0;

}

double Calculator::Add(double a, double b) {

	add++;
	return a + b;

}

double Calculator::Div(double a, double b) {

	div++;
	return a / b;

}

double Calculator::Min(double a, double b) {

	min++;
	return a - b;

}

double Calculator::Mul(double a, double b) {

	mul++;
	return a * b;

}

void Calculator::ShowOpCount() {

	cout << "µ¡¼À: " << add << endl;
	cout << "»¬¼À: " << min << endl;
	cout << "°ö¼À: " << mul << endl;
	cout << "³ª´°¼À: " << div << endl;

}

int main(void) {

	Calculator cal;

	cal.Init();
	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
	cal.ShowOpCount();

	return 0;
}