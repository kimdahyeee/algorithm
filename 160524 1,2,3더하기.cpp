//#include <iostream>
//using namespace std;
//
//int d[12];
//int a[12];
//
//int main() {
//	d[1] = 1;
//	d[2] = 2;
//	d[3] = 4;
//
//	int n;
//	
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//		if (a[i] >= 4) {
//			for (int j = 4; j <= a[i]; j++) {
//				d[j] = d[j - 1] + d[j - 2] + d[j - 3];
//			}
//		}
//	}
//	for (int i = 0; i < n; i++) {
//		cout << d[a[i]] << endl;
//	}
//}