#include <iostream>
#include <string>
using namespace std;

string s, result;
int main() {
	getline(cin, s);
	
	for (int i = 0; i <s.length(); i++) {
		int a = s[i];
		if (a >= 97 && a <= 109) {
			result[i] = a + 13;
		} //else if(a>109 && a<=122) {
		//	result[i] = 97 + (s[i]+13)%122;
		//}
		//else {
		//	result[i] = s[i];
		//}
	}

	for (int i = 0; i<result.length(); i++) {
		cout << result[i];
	}
}