#include<iostream>
#include<string>
#include<queue>
using namespace std;

queue<int> q;
int main() {
	int n, push_n;
	string req;
	cin >> n;
	while (n--) {
		cin >> req;
		if (req == "push") {
			cin >> push_n;
			q.push(push_n);
		}else if(req == "pop"){
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout<<q.front()<<endl;
				q.pop();
			}
		}
		else if (req == "size") {
			cout << q.size() << endl;
		}
		else if (req == "empty") {
			cout << q.empty() << endl;
		}
		else if (req == "front") {
			if (q.empty()) { cout << "-1" << endl; }
			else {
				cout << q.front() << endl;
			}
		}
		else if (req == "back") {
			if (q.empty()) { cout << "-1" << endl; }
			else {
				cout << q.back() << endl;
			}
		}
	}
}