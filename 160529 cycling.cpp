//#include <iostream>
//#include <vector>
//using namespace std;
//
//vector<int> v;
//int a, b, c;
//int sum;
//
//
//int main() {
//
//	int max = 0;
//	cin >> a;
//
//	for (int i = 0; i < a; i++) {
//		cin >> b;
//		v.push_back(b);
//	}
//	for (int i = 0; i < a - 1; i++) {
//		if (v[i] < v[i + 1]) {
//			c = v[i + 1] - v[i];
//			sum += c;
//			if (max < sum) {
//				max = sum;
//			}
//		}
//		else {
//			if (max < sum) {
//				max = sum;
//			}sum = 0;
//		}
//	}
//	if (max != 0) {
//		printf("%d", max);
//	}
//	else {
//		printf("%d", max);
//
//	}
//}