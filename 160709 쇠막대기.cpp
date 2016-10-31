//#include <iostream>
//#include <string>
//#include <stack>
//using namespace std;
//
//int c;
//stack<int> s;
//int t;
//
//int func(string a) {
//	for (int i = 0; i<a.length(); i++) {
//		if (a[i] == '(') {
//			t += 1;
//			s.push(t);
//		}
//		else {
//			if (a[i - 1] != a[i]) {
//				s.pop();
//				if (s.empty()) {
//					t = 0;
//				}
//				else {
//					t = s.top();
//				}
//				
//				c += t;
//			}
//			else {
//				s.pop(); 
//				if (s.empty()) {
//					t = 0;
//				}
//				else {
//					t = s.top();
//				}
//				c += 1;
//			}
//		}
//	}
//	return c;
//}
//
//int main() {
//	string b;
//	cin >> b;
//	cout << func(b);
//}