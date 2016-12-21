#include<iostream>
#include<string>
using namespace std;

struct Queue {
	int data[10000];
	int begin, end;
	Queue() {
		begin = 0;
		end = 0;
	}

	void push(int num) {
		data[end] = num;
		end += 1;
	}

	bool empty() {
		if (begin == end) {
			return true;
		}
		else {
			return false;
		}
	}

	int size() {
		return end - begin;
	}

	int front() {
		return data[begin];
	}

	int back() {
		return data[end - 1];
	}

	int pop() {
		if (empty()) {
			return -1;
		}
		begin += 1;
		return data[begin - 1];
	}


};
int main() {
	int n, push_n;
	string req;
	Queue q;
	cin >> n;
	while (n--) {
		cin >> req;
		if (req == "push") {
			cin >> push_n;
			q.push(push_n);
		}
		else if (req == "pop") {
			cout<<q.pop()<<endl;
		}else if(req=="size"){
			cout << q.size() << endl;
		}
		else if (req == "empty") {
			cout << q.empty() << endl;
		}
		else if (req == "front") {
			if (q.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << q.front() << endl;
			}
		}
		else if (req == "back") {

			if (q.empty()) {
				cout << "-1" << endl;
			}
			else {
				cout << q.back() << endl;
			}
		}
	}
}