#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
//strlen 문자열 길이 계산
//strcat 문자열 뒤에 덧붙이기
//strcpy 문자열 복사
//strcmp 문자열 비교

using namespace std;

int main(void) {

	char str1[30] = "Soojin is ";
	char str2[30] = "student.";
	char str3[20];

	cout << "str1 문자열의 길이는 " << strlen(str1) << endl;
	cout << strcat(str1, str2) << endl;

	strcpy(str3, str2);

	cout << "str2을 복사한 문자열 " << str3 << endl;

	if (strcmp(str1, str2) == 0) {
		cout << "두 문자는 동일합니다.";
	}
	else {
		cout << "두 문자는 동일하지 않습니다.";
	}

	return 0;
}