//#include <iostream>
//using namespace std;
//
//
//int num;
//int position;
//int a, b, c, d, s;
//int ni, by;
//int sum;
//
//int set(int x, int y) {
//	num++;
//	if (sum < s) {
//		if (num % 2 == 0) {
//			position -= y;
//			sum += y;
//			set(x, y);
//		}
//		else {
//			position += x;
//			sum += x;
//			set(x, y);
//		}
//	}
//	else if (sum == s) {
//		return position;
//	}
//	else{
//		if (num % 2 == 0) {
//			position -= x;
//			sum -= x;
//			int result = position + (s - sum);
//			return result;
//		}
//		else {
//			position += y;
//			sum -= y;
//			int result = position - (s - sum);
//			return result;
//		}
//	}
//}
//
//int main() {
//	
//	cin >> a;
//	cin >> b;
//	cin >> c;
//	cin >> d;
//	cin >> s;
//
//	ni = set(a, b);
//	num = 0;
//	position = 0;
//	sum = 0;
//	by = set(c, d);
//	
//	if (ni > by) {
//		cout << "Nikky";
//	}
//	else if (ni == by) {
//		cout << "Tied";
//	}
//	else {
//		cout << "Byron";
//	}
//
//	return 0;
//}