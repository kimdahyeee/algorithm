//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int b[1000];
//int d[1000];
//int main() {
//
//	int a;
//	cin >> a;
//	for (int i = 0; i < a; i++) {
//		cin >> b[i];
//	}
//	for (int i = 0; i < a; i++) {
//		for (int j = 0; j < i; j++) {
//			d[i] = max(b[i], d[i - j]);
//		}
//	}
//	for (int i = 0; i < a-1; i++) {
//		int a = max(d[i], d[i + 1]);
//	}
//	cout << a;
//}