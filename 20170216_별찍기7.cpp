#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = n - i; j > 0; j--) {
			cout << " ";
		}
		for (int t = 2 * i - 1; t > 0; t--) {
			cout << "*";
		}
		cout << endl;
	}
	for (int i = n-1; i >0; i--) {
		for (int t = 0; t < n - i; t++) {
			cout << " ";
		}
		for (int j = 0; j < 2 * i - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}