#include <iostream>
#include<string>
using namespace std;

struct Stack {
	int data[10000];
	int size;
	Stack() {
		size = 0;
	}

	void push(int num) {
		data[size] = num;
		size += 1;
	}

	bool empty() {
		if (size == 0) {
			return true;
		}else{
			return false;
		}
	}

	int pop() {
		if (empty()) {
			return -1;
		}
		else {
			size -= 1;
			return data[size];
		}
	}

	int top() {
		if (empty()) {
			return -1;
		}
		else {
			return data[size - 1];
		}
	}
};

int main() {
	int num, push_num;
	string req;
	cin >> num;

	Stack s;

	while (num--) {
		cin >> req;
		if (req == "push") {
			cin >> push_num;
			s.push(push_num);
		}
		else if(req=="top"){
			cout << s.top()<<endl;
		}else if (req == "size") {
			cout << s.size<<endl;
		}
		else if (req == "empty") {
			cout<<s.empty()<<endl;
		}
		else if(req == "pop"){
			cout << (s.empty() ? -1 : s.top())<<endl;
			s.pop();
		}
	}
}