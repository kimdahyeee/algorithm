//#include <iostream>
//using namespace std;
//
//int b[1000001];
//int main() {
//
//	int a;
//	cin >> a;
//	
//	b[1] = 0;
//	for (int i = 2; i <= a; i++) {
//		b[i] = b[i - 1] + 1;
//		if (i % 2 == 0 && b[i] > b[i / 2] + 1) {
//			b[i] = b[i / 2] + 1;
//		}
//		if (i % 3 == 0 && b[i] > b[i / 3] + 1) {
//			b[i] = b[i / 3] + 1;
//		}
//	}
//
//	cout << b[a];
//	return 0;
//}