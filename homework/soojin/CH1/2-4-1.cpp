#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
//strlen ���ڿ� ���� ���
//strcat ���ڿ� �ڿ� �����̱�
//strcpy ���ڿ� ����
//strcmp ���ڿ� ��

using namespace std;

int main(void) {

	char str1[30] = "Soojin is ";
	char str2[30] = "student.";
	char str3[20];

	cout << "str1 ���ڿ��� ���̴� " << strlen(str1) << endl;
	cout << strcat(str1, str2) << endl;

	strcpy(str3, str2);

	cout << "str2�� ������ ���ڿ� " << str3 << endl;

	if (strcmp(str1, str2) == 0) {
		cout << "�� ���ڴ� �����մϴ�.";
	}
	else {
		cout << "�� ���ڴ� �������� �ʽ��ϴ�.";
	}

	return 0;
}