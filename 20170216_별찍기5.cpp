#include<iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = n-i; j > 0; j--) {
			cout << " ";
		}
		for (int t = 0; t < 2 * i - 1; t++)
			cout << "*";
		cout << endl;
	}
}