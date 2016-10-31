#include <iostream>
#include <string>
using namespace std;

int main() {

	char str[];

	do {
		get(str);
	} while (*str != '\0')

		cout << str;


	return 0;
}

