//#include <iostream>
//#include <istream>
//#include <string>
//using namespace std;
//int a, b, c, d;
//int main() {
//	string s;
//	while (getline(cin, s)) { //공백 포함 문자열 입력받는 방법~ 입력이 없으면 끝나게하려고
//		for (int i = 0; i < s.length(); i++) {
//			if (s[i] >= 'a' && s[i] <= 'z') {
//				a++;
//			}
//			else if (s[i] >= 'A'&&s[i] <= 'Z') {
//				b++;
//			}
//			else if (s[i] >= '0') {
//				c++;
//			}
//			else {
//				d++; //나머지는 숫자겠지!
//			}
//		}
//		cout << a << " " << b << " " << c << " " << d << endl;
//		a = 0; b = 0; c = 0; d = 0; //더 좋은방법 없나?
//	}
//}