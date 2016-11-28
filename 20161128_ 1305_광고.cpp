#include <iostream>
#include<string>
using namespace std;

int len;
string word;
int result;
int front, tail;

int ad(int l, string w) {
	front=0, tail=1;
	for (int i = 0; i < l-1; i++) {
		if (w[front] == w[tail]) {
			result ++;
			front++;
		}
		else {
			if (w[front] != w[tail]) {
				result = 0;
				front = 0;
				if (w[0] == w[tail]) {
					result ++;
					front ++;
				}
			}
		}
		tail++;
	}

	return l - result;
}

int main() {
	cin >> len;
	cin >> word;
	
	cout << ad(len, word);
}