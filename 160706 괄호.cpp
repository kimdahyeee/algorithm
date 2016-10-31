#include <iostream>
#include <string>
#include<stack>
using namespace std;

stack<char> s;
int a;

int func(string c) {
	for (int i = 0; i < c.length(); i++) {
		if (c[i] == '(') {
			s.push(c[i]);
		}
		else {
			if (s.empty()) {
				return 0;
			}
			else {
				if (s.top() == '(') {
					s.pop();
				}
				else {					return 0;				}
			}
		}
	}
		if (!s.empty()) {
			return 0;
		}
		else {
			return 1;
		}
	}

int main(){
	string b;
	cin >> a;

	for (int i = 0; i < a; i++) {
		cin >> b;
		int c = func(b);
		if (c == 0) {
			cout << "NO";
		}
		else {
			cout << "YES";
		}
		while (!s.empty()) {
			s.pop();
		}
		cout << endl;
	}

}