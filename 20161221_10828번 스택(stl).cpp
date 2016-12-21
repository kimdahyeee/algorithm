#include<iostream>
#include <stack>
#include<string>
using namespace std;

stack<int> s;
int main() {
	int n, push_n;
	string req;
	cin >> n;
	while (n--) {
		cin >> req;
		if (req == "push") {
			cin >> push_n;
			s.push(push_n);
		}
		else if (req == "pop") {
			if (s.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << s.top() << endl;
				s.pop();
			}
		}else if(req == "size"){
			cout << s.size()<<endl;
		}
		else if (req == "empty") {
			cout << s.empty() << endl;
		}else if(req == "top"){
			if (s.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << s.top() << endl;
			}
		}
	}
}