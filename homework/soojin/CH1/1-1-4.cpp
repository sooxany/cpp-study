#include <iostream>

using namespace std;

int main(void) {

	int price = 0;
	int pay = 0;

    while (price != -1) {
		
			cout << "�Ǹ� �ݾ��� ���� ������ �Է� (-1 to end): ";
			cin >> price;

			if (price != -1) {
				pay = 50 + price * 0.12;

				cout << "�̹� �� �޿�: " << pay << "����" << endl;
			}

		
	} 
	
	if (price == -1) {
		cout << "���α׷��� �����մϴ�. ";
	}
		

	

	


	return 0;
}