#include <iostream>
#include <cstring>

using namespace std;


void changeString(char * string)
{
	string[2] = 'z';
}

int main()
{
	string myString = "hello";
	myString += ", there";
	string myOtherString = myString;

	if (myString == myOtherString) {
		myOtherString[0] = 'H';
	}

	cout << myString << endl;
	cout << myOtherString << endl;


	// char text1 = 'q';
	// const char* text2 = "abcde";  // 읽기 전용 -> 접근 후 주소 저장 불가
	// char text3[] = "abcde"; // 배열, 수정 가능 -> 접근 후 주소 저장 가능 -> 참조가 가능할까?

	// text1 = 'a';
	// text3[4] = 'z';

	// changeString(text3);


	// for (int i = 0; i < strlen(text2) + 1 ; i++)
	// {
	// 	cout << text2[i] << endl;
	// }


	// for (int i = 0; i < strlen(text3) + 1; i++)
	// {
	// 	cout << text3[i]; // abzde
	// }

	// cout << endl;

}

